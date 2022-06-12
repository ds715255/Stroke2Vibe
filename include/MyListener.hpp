#pragma once

#include <iostream>
#include <memory>
#include <map>

#include "antlr4-runtime.h"
#include "JSON5BaseListener.h"




class MyListener : public JSON5BaseListener
{
private:
    /* data */
    bool in_action;
    //std::shared_ptr<file> f;
    std::string current_key;
    int at; //timestamp
    int pos; //0-100

public:
    virtual void enterKey(JSON5Parser::KeyContext* ctx) override;
    virtual void exitNumber(JSON5Parser::NumberContext* ctx) override;
    virtual void exitObj(JSON5Parser::ObjContext* ctx) override;
    virtual void exitArr(JSON5Parser::ArrContext* ctx) override;
    MyListener(/*std::shared_ptr<file> newfile*/);
    //~MyListener();

    std::map<int, int> actions;
};


