
// Generated from JSON5.g4 by ANTLR 4.9.2


#include "JSON5Listener.h"

#include "JSON5Parser.h"


using namespace antlrcpp;
using namespace antlr4;

JSON5Parser::JSON5Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

JSON5Parser::~JSON5Parser() {
  delete _interpreter;
}

std::string JSON5Parser::getGrammarFileName() const {
  return "JSON5.g4";
}

const std::vector<std::string>& JSON5Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& JSON5Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Json5Context ------------------------------------------------------------------

JSON5Parser::Json5Context::Json5Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSON5Parser::Json5Context::EOF() {
  return getToken(JSON5Parser::EOF, 0);
}

JSON5Parser::ValueContext* JSON5Parser::Json5Context::value() {
  return getRuleContext<JSON5Parser::ValueContext>(0);
}


size_t JSON5Parser::Json5Context::getRuleIndex() const {
  return JSON5Parser::RuleJson5;
}

void JSON5Parser::Json5Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterJson5(this);
}

void JSON5Parser::Json5Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitJson5(this);
}

JSON5Parser::Json5Context* JSON5Parser::json5() {
  Json5Context *_localctx = _tracker.createInstance<Json5Context>(_ctx, getState());
  enterRule(_localctx, 0, JSON5Parser::RuleJson5);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(15);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JSON5Parser::T__0)
      | (1ULL << JSON5Parser::T__4)
      | (1ULL << JSON5Parser::LITERAL)
      | (1ULL << JSON5Parser::STRING)
      | (1ULL << JSON5Parser::NUMBER)
      | (1ULL << JSON5Parser::NUMERIC_LITERAL)
      | (1ULL << JSON5Parser::SYMBOL))) != 0)) {
      setState(14);
      value();
    }
    setState(17);
    match(JSON5Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjContext ------------------------------------------------------------------

JSON5Parser::ObjContext::ObjContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JSON5Parser::PairContext *> JSON5Parser::ObjContext::pair() {
  return getRuleContexts<JSON5Parser::PairContext>();
}

JSON5Parser::PairContext* JSON5Parser::ObjContext::pair(size_t i) {
  return getRuleContext<JSON5Parser::PairContext>(i);
}


size_t JSON5Parser::ObjContext::getRuleIndex() const {
  return JSON5Parser::RuleObj;
}

void JSON5Parser::ObjContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObj(this);
}

void JSON5Parser::ObjContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObj(this);
}

JSON5Parser::ObjContext* JSON5Parser::obj() {
  ObjContext *_localctx = _tracker.createInstance<ObjContext>(_ctx, getState());
  enterRule(_localctx, 2, JSON5Parser::RuleObj);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(35);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(19);
      match(JSON5Parser::T__0);
      setState(20);
      pair();
      setState(25);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(21);
          match(JSON5Parser::T__1);
          setState(22);
          pair(); 
        }
        setState(27);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      setState(29);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JSON5Parser::T__1) {
        setState(28);
        match(JSON5Parser::T__1);
      }
      setState(31);
      match(JSON5Parser::T__2);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(33);
      match(JSON5Parser::T__0);
      setState(34);
      match(JSON5Parser::T__2);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PairContext ------------------------------------------------------------------

JSON5Parser::PairContext::PairContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

JSON5Parser::KeyContext* JSON5Parser::PairContext::key() {
  return getRuleContext<JSON5Parser::KeyContext>(0);
}

JSON5Parser::ValueContext* JSON5Parser::PairContext::value() {
  return getRuleContext<JSON5Parser::ValueContext>(0);
}


size_t JSON5Parser::PairContext::getRuleIndex() const {
  return JSON5Parser::RulePair;
}

void JSON5Parser::PairContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPair(this);
}

void JSON5Parser::PairContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPair(this);
}

JSON5Parser::PairContext* JSON5Parser::pair() {
  PairContext *_localctx = _tracker.createInstance<PairContext>(_ctx, getState());
  enterRule(_localctx, 4, JSON5Parser::RulePair);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(37);
    key();
    setState(38);
    match(JSON5Parser::T__3);
    setState(39);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- KeyContext ------------------------------------------------------------------

JSON5Parser::KeyContext::KeyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSON5Parser::KeyContext::STRING() {
  return getToken(JSON5Parser::STRING, 0);
}

tree::TerminalNode* JSON5Parser::KeyContext::IDENTIFIER() {
  return getToken(JSON5Parser::IDENTIFIER, 0);
}

tree::TerminalNode* JSON5Parser::KeyContext::LITERAL() {
  return getToken(JSON5Parser::LITERAL, 0);
}

tree::TerminalNode* JSON5Parser::KeyContext::NUMERIC_LITERAL() {
  return getToken(JSON5Parser::NUMERIC_LITERAL, 0);
}


size_t JSON5Parser::KeyContext::getRuleIndex() const {
  return JSON5Parser::RuleKey;
}

void JSON5Parser::KeyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKey(this);
}

void JSON5Parser::KeyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKey(this);
}

JSON5Parser::KeyContext* JSON5Parser::key() {
  KeyContext *_localctx = _tracker.createInstance<KeyContext>(_ctx, getState());
  enterRule(_localctx, 6, JSON5Parser::RuleKey);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << JSON5Parser::LITERAL)
      | (1ULL << JSON5Parser::STRING)
      | (1ULL << JSON5Parser::NUMERIC_LITERAL)
      | (1ULL << JSON5Parser::IDENTIFIER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

JSON5Parser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSON5Parser::ValueContext::STRING() {
  return getToken(JSON5Parser::STRING, 0);
}

JSON5Parser::NumberContext* JSON5Parser::ValueContext::number() {
  return getRuleContext<JSON5Parser::NumberContext>(0);
}

JSON5Parser::ObjContext* JSON5Parser::ValueContext::obj() {
  return getRuleContext<JSON5Parser::ObjContext>(0);
}

JSON5Parser::ArrContext* JSON5Parser::ValueContext::arr() {
  return getRuleContext<JSON5Parser::ArrContext>(0);
}

tree::TerminalNode* JSON5Parser::ValueContext::LITERAL() {
  return getToken(JSON5Parser::LITERAL, 0);
}


size_t JSON5Parser::ValueContext::getRuleIndex() const {
  return JSON5Parser::RuleValue;
}

void JSON5Parser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void JSON5Parser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

JSON5Parser::ValueContext* JSON5Parser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 8, JSON5Parser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case JSON5Parser::STRING: {
        enterOuterAlt(_localctx, 1);
        setState(43);
        match(JSON5Parser::STRING);
        break;
      }

      case JSON5Parser::NUMBER:
      case JSON5Parser::NUMERIC_LITERAL:
      case JSON5Parser::SYMBOL: {
        enterOuterAlt(_localctx, 2);
        setState(44);
        number();
        break;
      }

      case JSON5Parser::T__0: {
        enterOuterAlt(_localctx, 3);
        setState(45);
        obj();
        break;
      }

      case JSON5Parser::T__4: {
        enterOuterAlt(_localctx, 4);
        setState(46);
        arr();
        break;
      }

      case JSON5Parser::LITERAL: {
        enterOuterAlt(_localctx, 5);
        setState(47);
        match(JSON5Parser::LITERAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArrContext ------------------------------------------------------------------

JSON5Parser::ArrContext::ArrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<JSON5Parser::ValueContext *> JSON5Parser::ArrContext::value() {
  return getRuleContexts<JSON5Parser::ValueContext>();
}

JSON5Parser::ValueContext* JSON5Parser::ArrContext::value(size_t i) {
  return getRuleContext<JSON5Parser::ValueContext>(i);
}


size_t JSON5Parser::ArrContext::getRuleIndex() const {
  return JSON5Parser::RuleArr;
}

void JSON5Parser::ArrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArr(this);
}

void JSON5Parser::ArrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArr(this);
}

JSON5Parser::ArrContext* JSON5Parser::arr() {
  ArrContext *_localctx = _tracker.createInstance<ArrContext>(_ctx, getState());
  enterRule(_localctx, 10, JSON5Parser::RuleArr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(66);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(50);
      match(JSON5Parser::T__4);
      setState(51);
      value();
      setState(56);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(52);
          match(JSON5Parser::T__1);
          setState(53);
          value(); 
        }
        setState(58);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
      }
      setState(60);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == JSON5Parser::T__1) {
        setState(59);
        match(JSON5Parser::T__1);
      }
      setState(62);
      match(JSON5Parser::T__5);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
      match(JSON5Parser::T__4);
      setState(65);
      match(JSON5Parser::T__5);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

JSON5Parser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* JSON5Parser::NumberContext::NUMERIC_LITERAL() {
  return getToken(JSON5Parser::NUMERIC_LITERAL, 0);
}

tree::TerminalNode* JSON5Parser::NumberContext::NUMBER() {
  return getToken(JSON5Parser::NUMBER, 0);
}

tree::TerminalNode* JSON5Parser::NumberContext::SYMBOL() {
  return getToken(JSON5Parser::SYMBOL, 0);
}


size_t JSON5Parser::NumberContext::getRuleIndex() const {
  return JSON5Parser::RuleNumber;
}

void JSON5Parser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void JSON5Parser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<JSON5Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

JSON5Parser::NumberContext* JSON5Parser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 12, JSON5Parser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == JSON5Parser::SYMBOL) {
      setState(68);
      match(JSON5Parser::SYMBOL);
    }
    setState(71);
    _la = _input->LA(1);
    if (!(_la == JSON5Parser::NUMBER

    || _la == JSON5Parser::NUMERIC_LITERAL)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> JSON5Parser::_decisionToDFA;
atn::PredictionContextCache JSON5Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN JSON5Parser::_atn;
std::vector<uint16_t> JSON5Parser::_serializedATN;

std::vector<std::string> JSON5Parser::_ruleNames = {
  "json5", "obj", "pair", "key", "value", "arr", "number"
};

std::vector<std::string> JSON5Parser::_literalNames = {
  "", "'{'", "','", "'}'", "':'", "'['", "']'"
};

std::vector<std::string> JSON5Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "SINGLE_LINE_COMMENT", "MULTI_LINE_COMMENT", 
  "LITERAL", "STRING", "NUMBER", "NUMERIC_LITERAL", "SYMBOL", "IDENTIFIER", 
  "WS"
};

dfa::Vocabulary JSON5Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> JSON5Parser::_tokenNames;

JSON5Parser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x11, 0x4c, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x3, 0x2, 0x5, 0x2, 0x12, 0xa, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
       0x1a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x1d, 0xb, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x20, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 
       0x3, 0x26, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x5, 0x6, 0x33, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
       0x7, 0x7, 0x39, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x3c, 0xb, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x3f, 0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x45, 0xa, 0x7, 0x3, 0x8, 0x5, 0x8, 0x48, 0xa, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x2, 0x2, 0x9, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x2, 0x4, 0x5, 0x2, 0xb, 0xc, 0xe, 0xe, 0x10, 0x10, 
       0x3, 0x2, 0xd, 0xe, 0x2, 0x50, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x4, 
       0x25, 0x3, 0x2, 0x2, 0x2, 0x6, 0x27, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2b, 
       0x3, 0x2, 0x2, 0x2, 0xa, 0x32, 0x3, 0x2, 0x2, 0x2, 0xc, 0x44, 0x3, 
       0x2, 0x2, 0x2, 0xe, 0x47, 0x3, 0x2, 0x2, 0x2, 0x10, 0x12, 0x5, 0xa, 
       0x6, 0x2, 0x11, 0x10, 0x3, 0x2, 0x2, 0x2, 0x11, 0x12, 0x3, 0x2, 0x2, 
       0x2, 0x12, 0x13, 0x3, 0x2, 0x2, 0x2, 0x13, 0x14, 0x7, 0x2, 0x2, 0x3, 
       0x14, 0x3, 0x3, 0x2, 0x2, 0x2, 0x15, 0x16, 0x7, 0x3, 0x2, 0x2, 0x16, 
       0x1b, 0x5, 0x6, 0x4, 0x2, 0x17, 0x18, 0x7, 0x4, 0x2, 0x2, 0x18, 0x1a, 
       0x5, 0x6, 0x4, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1d, 0x3, 
       0x2, 0x2, 0x2, 0x1b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 
       0x2, 0x1e, 0x20, 0x7, 0x4, 0x2, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 
       0x1f, 0x20, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 
       0x22, 0x7, 0x5, 0x2, 0x2, 0x22, 0x26, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 
       0x7, 0x3, 0x2, 0x2, 0x24, 0x26, 0x7, 0x5, 0x2, 0x2, 0x25, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x5, 0x3, 0x2, 
       0x2, 0x2, 0x27, 0x28, 0x5, 0x8, 0x5, 0x2, 0x28, 0x29, 0x7, 0x6, 0x2, 
       0x2, 0x29, 0x2a, 0x5, 0xa, 0x6, 0x2, 0x2a, 0x7, 0x3, 0x2, 0x2, 0x2, 
       0x2b, 0x2c, 0x9, 0x2, 0x2, 0x2, 0x2c, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2d, 
       0x33, 0x7, 0xc, 0x2, 0x2, 0x2e, 0x33, 0x5, 0xe, 0x8, 0x2, 0x2f, 0x33, 
       0x5, 0x4, 0x3, 0x2, 0x30, 0x33, 0x5, 0xc, 0x7, 0x2, 0x31, 0x33, 0x7, 
       0xb, 0x2, 0x2, 0x32, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x32, 0x2e, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 
       0x2, 0x32, 0x31, 0x3, 0x2, 0x2, 0x2, 0x33, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x34, 0x35, 0x7, 0x7, 0x2, 0x2, 0x35, 0x3a, 0x5, 0xa, 0x6, 0x2, 0x36, 
       0x37, 0x7, 0x4, 0x2, 0x2, 0x37, 0x39, 0x5, 0xa, 0x6, 0x2, 0x38, 0x36, 
       0x3, 0x2, 0x2, 0x2, 0x39, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 
       0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3e, 0x3, 0x2, 
       0x2, 0x2, 0x3c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3f, 0x7, 0x4, 0x2, 
       0x2, 0x3e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 
       0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x7, 0x8, 0x2, 0x2, 0x41, 
       0x45, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x7, 0x2, 0x2, 0x43, 0x45, 
       0x7, 0x8, 0x2, 0x2, 0x44, 0x34, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 
       0x2, 0x2, 0x2, 0x45, 0xd, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x7, 0xf, 
       0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 
       0x2, 0x48, 0x49, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x9, 0x3, 0x2, 0x2, 
       0x4a, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb, 0x11, 0x1b, 0x1f, 0x25, 0x32, 
       0x3a, 0x3e, 0x44, 0x47, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

JSON5Parser::Initializer JSON5Parser::_init;
