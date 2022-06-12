
// Generated from JSON5.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "JSON5Listener.h"


/**
 * This class provides an empty implementation of JSON5Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  JSON5BaseListener : public JSON5Listener {
public:

  virtual void enterJson5(JSON5Parser::Json5Context * /*ctx*/) override { }
  virtual void exitJson5(JSON5Parser::Json5Context * /*ctx*/) override { }

  virtual void enterObj(JSON5Parser::ObjContext * /*ctx*/) override { }
  virtual void exitObj(JSON5Parser::ObjContext * /*ctx*/) override { }

  virtual void enterPair(JSON5Parser::PairContext * /*ctx*/) override { }
  virtual void exitPair(JSON5Parser::PairContext * /*ctx*/) override { }

  virtual void enterKey(JSON5Parser::KeyContext * /*ctx*/) override { }
  virtual void exitKey(JSON5Parser::KeyContext * /*ctx*/) override { }

  virtual void enterValue(JSON5Parser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(JSON5Parser::ValueContext * /*ctx*/) override { }

  virtual void enterArr(JSON5Parser::ArrContext * /*ctx*/) override { }
  virtual void exitArr(JSON5Parser::ArrContext * /*ctx*/) override { }

  virtual void enterNumber(JSON5Parser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(JSON5Parser::NumberContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

