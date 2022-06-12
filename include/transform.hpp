#pragma once

#include <map>
#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>

class Actions
{

public:

    static std::map<int, double> DiscreteDifferential(std::map<int, int> in);

    static std::map<int, double> Normalize(std::map<int, double> in);

    static std::map<int, double> LinearScaling(std::map<int, double> in, float scale);

    static std::map<int, double> LocationMultiplier(std::map<int, double> in, std::map<int, int> orig);

    static std::map<int, double> SquareRoot(std::map<int, double> in);

    static std::map<int, double> CutBot(std::map<int, double> in, float cutoff);

    static void FindMax(std::map<int, double> in);

    static std::map<int, double> CutTop(std::map<int, double> in, float cutoff);


    static std::map<int, double> Shorten(std::map<int, double> in, float diff);
    static std::map<int, double> SanitizePos(std::map<int, double> in);
    static void Print(std::map<int, double> in, std::string filename);
    static void Save(std::map<int, double> in, std::string filename);
    static void Stats(std::map<int, double> in);


};

