
// Generated from JSON5.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "JSON5Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by JSON5Parser.
 */
class  JSON5Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterJson5(JSON5Parser::Json5Context *ctx) = 0;
  virtual void exitJson5(JSON5Parser::Json5Context *ctx) = 0;

  virtual void enterObj(JSON5Parser::ObjContext *ctx) = 0;
  virtual void exitObj(JSON5Parser::ObjContext *ctx) = 0;

  virtual void enterPair(JSON5Parser::PairContext *ctx) = 0;
  virtual void exitPair(JSON5Parser::PairContext *ctx) = 0;

  virtual void enterKey(JSON5Parser::KeyContext *ctx) = 0;
  virtual void exitKey(JSON5Parser::KeyContext *ctx) = 0;

  virtual void enterValue(JSON5Parser::ValueContext *ctx) = 0;
  virtual void exitValue(JSON5Parser::ValueContext *ctx) = 0;

  virtual void enterArr(JSON5Parser::ArrContext *ctx) = 0;
  virtual void exitArr(JSON5Parser::ArrContext *ctx) = 0;

  virtual void enterNumber(JSON5Parser::NumberContext *ctx) = 0;
  virtual void exitNumber(JSON5Parser::NumberContext *ctx) = 0;


};

