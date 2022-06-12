
#include <memory>
#include <iostream>
#include <map>
#include <conio.h>
#include <stdlib.h >
#include <antlr4-runtime.h>
#include "JSON5Parser.h"
#include "JSON5Lexer.h"

#include "MyListener.hpp"
#include "transform.hpp"

void Print_Commands() {
    std::cout << std::endl << "========File commands========" << std::endl;
    std::cout << "  1 - Clear Console and show commands" << std::endl;
    std::cout << "  2 - Print Script Statistics" << std::endl;
    std::cout << "  3 - Save file (adds _c postfix to filename)" << std::endl;
    std::cout << "  4 - Reset changes" << std::endl;
    std::cout << "  5 - Print Max Value" << std::endl;
    std::cout << "  6 - Exit" << std::endl;
    std::cout << "  9 - Show Commands" << std::endl;
    std::cout << std::endl << "========Functions========" << std::endl;
    std::cout << "  q - Linear Scale  f(x) = m * x" << std::endl;
    std::cout << "  w - SQRT(pos)" << std::endl;
    std::cout << "  e - Multiply Pos depending on stroke start and end position " << std::endl;
    std::cout << std::endl << "========Optimization========" << std::endl;
    std::cout << "  a - Shorten (Remove small differences in pos values)" << std::endl;
    std::cout << "  s - Set Values below X to 0" << std::endl;
    std::cout << "  d - Remove Values above X" << std::endl;
    std::cout << "  f - Normalize (Stretch/Shrink Values so that max pos is 100" << std::endl;
    std::cout << "  g - Sanitize pos (make sure values between 0 and 100)" << std::endl;

}



int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cout << "Enter file as argument!" << std::endl;
        exit(EXIT_FAILURE);
    }
    else {
        std::string filename = std::string(argv[1]);

        std::ifstream stream;
        stream.open(argv[1]);
        antlr4::ANTLRInputStream input(stream);

        JSON5Lexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        JSON5Parser parser(&tokens);

        antlr4::tree::ParseTree* tree = parser.json5();


        MyListener listener;
        antlr4::tree::ParseTreeWalker walker;
        walker.walk(&listener, tree);
        std::cout << listener.actions.size() << " Actions parsed" << std::endl;
        std::map<int, double> data = Actions::DiscreteDifferential(listener.actions);
        data = Actions::Normalize(data);

        Print_Commands();
        std::string log = "Conversion";
        while (true) {
            std::cout << "Enter a command:";
            char c = getch();
            std::cout << c << std::endl;

            switch (c) {
                ////////FILE COMMANDS///////
            case '1': {
                system("CLS");
                Print_Commands();
                break;
            }
            case '2': {
                Actions::Stats(data);
                break;
            }
            case '3': {
                log.append("->Sanitize");
                data = Actions::SanitizePos(data);
                log.append("->Save");
                Actions::Save(data, filename);
                std::cout << "Steps taken:" << std::endl;
                std::cout << "  " << log << std::endl;
                break;
            }
            case '4': {
                std::cout << "Resetting Actions" << std::endl;
                std::cout << "Steps taken before reset:" << std::endl;
                std::cout << "  " << log << std::endl;
                data = Actions::DiscreteDifferential(listener.actions);
                log = "Conversion";
                break;

            }
            case '5': {
                Actions::FindMax(data);
                break;
            }
            case '6': {
                std::cout << "Exiting";
                exit(EXIT_SUCCESS);
                break;
            }
            case '9': {

                Print_Commands();
                break;
            }
                    ///////// FUNCTIONS/////////
            case 'q': {
                std::cout << "Enter multiplier" << std::endl;
                float diff;
                std::cin.clear();
                std::cin >> diff;
                if (!std::cin.fail()) {
                    std::cout << "Multiplied pos values by " << diff << std::endl;
                    log.append("->MUL(" + std::to_string(diff) + ")");
                    data = Actions::LinearScaling(data, diff);
                }
                else {
                    std::cout << "Illegal Input" << std::endl;
                }
                break;
            }
            case 'w': {
                std::cout << "Applied Square Root to pos values" << std::endl;
                log.append("->SQRT");
                data = Actions::SquareRoot(data);
                break;
            }
            case 'e': {
                std::cout << "Adjusted values according to stroke position. Normaizing recommended after." << std::endl;
                log.append("->ApplyStrokePos");
                data = Actions::LocationMultiplier(data, listener.actions);
                break;
            }

                    ////Other modifiers//////
            case 'a': {
                std::cout << "Enter max difference between neighbouring actions" << std::endl;
                float diff;
                std::cin.clear();
                std::cin >> diff;
                if (!std::cin.fail()) {
                    log.append("->DiffAbove(" + std::to_string(diff) + ")");
                    data = Actions::Shorten(data, diff);
                }
                else {
                    std::cout << "Illegal Input" << std::endl;
                }
                break;
            }
            case 's': {
                std::cout << "Enter lower limit" << std::endl;
                float limit;
                std::cin.clear();
                std::cin >> limit;
                if (!std::cin.fail()) {
                    log.append("->RemoveBelow(" + std::to_string(limit) + ")");
                    data = Actions::CutBot(data, limit);
                }
                else {
                    std::cout << "Illegal Input" << std::endl;
                }
                break;
            }
            case 'd': {
                std::cout << "Enter upper limit" << std::endl;
                float limit;
                std::cin.clear();
                std::cin >> limit;
                if (!std::cin.fail()) {
                    log.append("->RemoveAbove(" + std::to_string(limit) + ")");
                    data = Actions::CutTop(data, limit);
                }
                else {
                    std::cout << "Illegal Input" << std::endl;
                }
                break;
            }
            case 'f': {
                log.append("->Normalize");
                std::cout << "Normalizing" << std::endl;
                data = Actions::Normalize(data);
                break;
            }


            case 'g': {
                log.append("->Sanitize");
                std::cout << "Sanitizing pos values" << std::endl;
                data = Actions::SanitizePos(data);
                break;
            }
            default: {
                std::cout << "Unknown Command. Press 9 to show commands " << std::endl;
            }
            }
            std::cin.clear();
        }


    }

    //std::cout << tree->toStringTree(&parser);

    return 0;



}