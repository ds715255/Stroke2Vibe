#include "transform.hpp"



std::map<int, double> Actions::DiscreteDifferential(std::map<int, int> in) {

    std::map<int, double> ret;
    std::pair<int, int> prev;
    prev.first = 0;
    prev.second = 0;

    for (auto& it : in) {
        if (it.first != (*in.begin()).first) {
            double value = std::abs(((double)(it.second - prev.second)) / (it.first - prev.first));
            ret.emplace(prev.first, value);
        }
        prev = it;

    }
    ret.emplace(prev.first, 0.0);

    return ret;
}

std::map<int, double> Actions::Normalize(std::map<int, double> in) {
    std::map<int, double> ret;
    ret.clear();
    //1.find max
    double max = 0.0;
    for (auto& it : in) {
        if (it.second > max) {
            max = it.second;
        }
    }


    if (max != 0) {
        for (auto& it : in) {
            double value = (100 * it.second) / max;
            ret.emplace(it.first, value);
        }

    }

    return ret;
}

std::map<int, double> Actions::LinearScaling(std::map<int, double> in, float scale) {

    std::map<int, double> ret;
    ret.clear();
    for (auto& it : in) {
        ret.emplace(it.first, scale * it.second);
    }
    return ret;
}


void Actions::Print(std::map<int, double> in, std::string filename) {

    std::cout << "Printing file: " << filename << std::endl;
    for (auto& it : in) {
        std::cout << "at:" << it.first << ",pos:" << it.second << std::endl;
    }
    std::cout << "Printing file: " << filename << " end. " << in.size() << " Entries" << std::endl;
}


void Actions::Save(std::map<int, double> in, std::string filename) {

    std::string filename_short = filename.substr(0, filename.find_last_of("."));
    filename_short.append("_c.funscript");
    std::ofstream file(filename_short, std::ofstream::trunc);
    file << "{\"actions\":[" << std::endl;


    for (auto it : in) {
        file << "{\"at\":" << it.first << ",\"pos\":" << std::round(it.second) << "}";
        if (it.first != (*std::prev(in.end())).first) {
            file << ",";
        }
        file << std::endl;
    }
    file << "]}";
    file.close();
    std::cout << "Saved " << filename_short << " with " << in.size() << " Actions" << std::endl;

}
std::map<int, double> Actions::Shorten(std::map<int, double> in, float diff) {

    std::cout << "Shortening from " << in.size() << " to ";
    std::map<int, double> ret;
    double value = 0;
    for (auto& it : in) {
        if ((it.first != (*std::prev(in.end())).first) && (std::abs(value - it.second) > diff)) {
            ret.emplace(it.first, it.second);
            value = it.second;
        }

    }
    std::cout << ret.size() << " Value pairs with max difference of " << diff << std::endl;
    return ret;
}

std::map<int, double> Actions::SanitizePos(std::map<int, double> in) {

    std::cout << "Sanitizing Actions (making sure actions are between 0 and 100 " << std::endl;
    std::map<int, double> ret;

    for (auto& it : in) {
        ret.emplace(it.first, std::min(100.0, std::max(it.second, 0.0)));
    }

    return ret;
}

std::map<int, double> Actions::SquareRoot(std::map<int, double> in) {
    std::map<int, double> ret;
    for (auto& it : in) {
        ret.emplace(it.first, std::sqrt(it.second));
    }
    return ret;
}

void Actions::Stats(std::map<int, double> in) {
    std::cout << "-----------------------------------" << std::endl;
    int size = in.size();
    int duration = std::round(((float)(*std::prev(in.end())).first) / 1000);
    div_t res = div(duration, 3600);
    int hours = res.quot;
    div_t res2 = div(res.rem, 60);
    int minutes = res2.quot;
    int seconds = res2.rem;
    std::cout << "Script Duration: " << hours << "h" << minutes << "m" << seconds << "s" << std::endl;
    std::cout << "Action points: " << size << std::endl;
    std::cout << "-------Time in the percentile------" << std::endl;
    std::map <int, int> percentile;
    double sum = 0.0;
    int prev_at = 0;
    int prev_pos = 0;
    int total_duration = 0;
    for (auto& it : in) {
        sum += it.second;
        int percent = div(it.second, 10).quot;
        int duration = it.first - prev_at;
        percentile[prev_pos] += duration;
        total_duration += duration;
        prev_at = it.first;
        prev_pos = percent;

    }

    for (auto& it : percentile) {
        std::cout << it.first << "0% -> " << it.first << "9.99% Intensity: "
            << it.second << "s  (" << 100 * (float)it.second / total_duration << "%)" << std::endl;

    }
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Average Position: " << sum / size << std::endl;



}


std::map<int, double> Actions::LocationMultiplier(std::map<int, double> in, std::map<int, int> orig) {

    std::map<int, double> ret;

    for (auto& it : in) {
        auto it2 = orig.find(it.first);
        float val1 = (*it2).second;
        float val2 = (*std::next(it2)).second;
        float multiplier = ((float)(val1 + val2)) / 100;
        ret.emplace(it.first, multiplier * it.second);
    }


    return ret;
}

std::map<int, double> Actions::CutBot(std::map<int, double> in, float cutoff) {

    std::map<int, double> ret;
    int num_removed = 0;
    for (auto& it : in) {
        if (it.second >= cutoff) {
            ret.emplace(it.first, it.second);
        }
        else {
            ret.emplace(it.first, 0.0);
            num_removed++;
        }
    }
    std::cout << "Removed " << num_removed << " Actions with pos below " << cutoff << std::endl;
    return ret;
}

void Actions::FindMax(std::map<int, double> in) {

    std::pair<int, double> max = std::make_pair(0, 0.0);
    for (auto& it : in) {
        if (it.second > max.second) {
            max = it;
        }
    }
    std::cout << "Max value: at:" << max.first << "  pos:" << max.second << std::endl;

}

std::map <int, double> Actions::CutTop(std::map<int, double> in, float cutoff) {

    std::map<int, double> ret;
    int count = 0;
    for (auto& it : in) {
        if (it.second < cutoff) {
            ret.insert(it);
        }
        else { count++; }
    }

    std::cout << "Removed " << count << " Actions above value" << cutoff << std::endl;
    return ret;

}