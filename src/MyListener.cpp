#include "MyListener.hpp"


MyListener::MyListener(/*std::shared_ptr<file> newfile*/) : current_key("NULL") {
    in_action = false;
    //f = newfile;
    at = 0;
    pos = 0;

}

void MyListener::enterKey(JSON5Parser::KeyContext* ctx) {

    if (ctx->getText() == "\"actions\"") {
        in_action = true;
        std::cout << "Entering actions" << std::endl;
    }
    if (ctx->getText() == "\"at\"") {

        current_key = "at";

    }
    if (ctx->getText() == "\"pos\"") {

        current_key = "pos";

    }
}

void MyListener::exitNumber(JSON5Parser::NumberContext* ctx) {
    if (in_action) {
        if (current_key == "at") {
            at = std::stoi(ctx->getText());


        }
        if (current_key == "pos") {
            pos = std::stoi(ctx->getText());
        }

    }
}

void MyListener::exitObj(JSON5Parser::ObjContext* ctx) {
    if (in_action) {
        //temp.print(std::cout);
        //std::cout << pos << "," << at << std::endl;
        //f->insert_actionpoint(temp.pos, temp.at);
        actions[at] = pos;
    }
}

void MyListener::exitArr(JSON5Parser::ArrContext* ctx) {
    if (in_action) {
        in_action = false;
    }
}