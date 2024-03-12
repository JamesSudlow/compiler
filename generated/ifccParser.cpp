
// Generated from ifcc.g4 by ANTLR 4.7.2


#include "ifccVisitor.h"

#include "ifccParser.h"


using namespace antlrcpp;
using namespace antlr4;

ifccParser::ifccParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ifccParser::~ifccParser() {
  delete _interpreter;
}

std::string ifccParser::getGrammarFileName() const {
  return "ifcc.g4";
}

const std::vector<std::string>& ifccParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ifccParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- AxiomContext ------------------------------------------------------------------

ifccParser::AxiomContext::AxiomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ProgContext* ifccParser::AxiomContext::prog() {
  return getRuleContext<ifccParser::ProgContext>(0);
}

tree::TerminalNode* ifccParser::AxiomContext::EOF() {
  return getToken(ifccParser::EOF, 0);
}


size_t ifccParser::AxiomContext::getRuleIndex() const {
  return ifccParser::RuleAxiom;
}

antlrcpp::Any ifccParser::AxiomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAxiom(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AxiomContext* ifccParser::axiom() {
  AxiomContext *_localctx = _tracker.createInstance<AxiomContext>(_ctx, getState());
  enterRule(_localctx, 0, ifccParser::RuleAxiom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(22);
    prog();
    setState(23);
    match(ifccParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgContext ------------------------------------------------------------------

ifccParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::FormuleContext* ifccParser::ProgContext::formule() {
  return getRuleContext<ifccParser::FormuleContext>(0);
}

ifccParser::Return_stmtContext* ifccParser::ProgContext::return_stmt() {
  return getRuleContext<ifccParser::Return_stmtContext>(0);
}


size_t ifccParser::ProgContext::getRuleIndex() const {
  return ifccParser::RuleProg;
}

antlrcpp::Any ifccParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ProgContext* ifccParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 2, ifccParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(25);
    match(ifccParser::T__0);
    setState(26);
    match(ifccParser::T__1);
    setState(27);
    match(ifccParser::T__2);
    setState(28);
    match(ifccParser::T__3);
    setState(29);
    match(ifccParser::T__4);
    setState(30);
    formule();
    setState(31);
    return_stmt();
    setState(32);
    match(ifccParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

ifccParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::Return_stmtContext::RETURN() {
  return getToken(ifccParser::RETURN, 0);
}

ifccParser::ExprContext* ifccParser::Return_stmtContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}


size_t ifccParser::Return_stmtContext::getRuleIndex() const {
  return ifccParser::RuleReturn_stmt;
}

antlrcpp::Any ifccParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::Return_stmtContext* ifccParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, ifccParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    match(ifccParser::RETURN);
    setState(35);
    expr(0);
    setState(36);
    match(ifccParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FormuleContext ------------------------------------------------------------------

ifccParser::FormuleContext::FormuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::DecaContext* ifccParser::FormuleContext::deca() {
  return getRuleContext<ifccParser::DecaContext>(0);
}

ifccParser::FormuleContext* ifccParser::FormuleContext::formule() {
  return getRuleContext<ifccParser::FormuleContext>(0);
}

ifccParser::DecContext* ifccParser::FormuleContext::dec() {
  return getRuleContext<ifccParser::DecContext>(0);
}

ifccParser::AssContext* ifccParser::FormuleContext::ass() {
  return getRuleContext<ifccParser::AssContext>(0);
}

ifccParser::FonctionContext* ifccParser::FormuleContext::fonction() {
  return getRuleContext<ifccParser::FonctionContext>(0);
}


size_t ifccParser::FormuleContext::getRuleIndex() const {
  return ifccParser::RuleFormule;
}

antlrcpp::Any ifccParser::FormuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFormule(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FormuleContext* ifccParser::formule() {
  FormuleContext *_localctx = _tracker.createInstance<FormuleContext>(_ctx, getState());
  enterRule(_localctx, 6, ifccParser::RuleFormule);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      match(ifccParser::T__0);
      setState(39);
      deca();
      setState(40);
      match(ifccParser::T__6);
      setState(41);
      formule();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(43);
      match(ifccParser::T__0);
      setState(44);
      dec();
      setState(45);
      match(ifccParser::T__6);
      setState(46);
      formule();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(48);
      ass();
      setState(49);
      formule();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(51);
      fonction();
      setState(52);
      formule();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MoreContext ------------------------------------------------------------------

ifccParser::MoreContext::MoreContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::DecContext* ifccParser::MoreContext::dec() {
  return getRuleContext<ifccParser::DecContext>(0);
}

ifccParser::DecaContext* ifccParser::MoreContext::deca() {
  return getRuleContext<ifccParser::DecaContext>(0);
}


size_t ifccParser::MoreContext::getRuleIndex() const {
  return ifccParser::RuleMore;
}

antlrcpp::Any ifccParser::MoreContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMore(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::MoreContext* ifccParser::more() {
  MoreContext *_localctx = _tracker.createInstance<MoreContext>(_ctx, getState());
  enterRule(_localctx, 8, ifccParser::RuleMore);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(62);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(57);
      match(ifccParser::T__7);
      setState(58);
      dec();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      match(ifccParser::T__7);
      setState(60);
      deca();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecContext ------------------------------------------------------------------

ifccParser::DecContext::DecContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::DecContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::MoreContext* ifccParser::DecContext::more() {
  return getRuleContext<ifccParser::MoreContext>(0);
}


size_t ifccParser::DecContext::getRuleIndex() const {
  return ifccParser::RuleDec;
}

antlrcpp::Any ifccParser::DecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDec(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DecContext* ifccParser::dec() {
  DecContext *_localctx = _tracker.createInstance<DecContext>(_ctx, getState());
  enterRule(_localctx, 10, ifccParser::RuleDec);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(ifccParser::VAR);
    setState(65);
    more();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DecaContext ------------------------------------------------------------------

ifccParser::DecaContext::DecaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::DecaContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ExprContext* ifccParser::DecaContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::MoreContext* ifccParser::DecaContext::more() {
  return getRuleContext<ifccParser::MoreContext>(0);
}


size_t ifccParser::DecaContext::getRuleIndex() const {
  return ifccParser::RuleDeca;
}

antlrcpp::Any ifccParser::DecaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitDeca(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::DecaContext* ifccParser::deca() {
  DecaContext *_localctx = _tracker.createInstance<DecaContext>(_ctx, getState());
  enterRule(_localctx, 12, ifccParser::RuleDeca);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(ifccParser::VAR);
    setState(68);
    match(ifccParser::T__8);
    setState(69);
    expr(0);
    setState(70);
    more();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssContext ------------------------------------------------------------------

ifccParser::AssContext::AssContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::AssContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}

ifccParser::ExprContext* ifccParser::AssContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}


size_t ifccParser::AssContext::getRuleIndex() const {
  return ifccParser::RuleAss;
}

antlrcpp::Any ifccParser::AssContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAss(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::AssContext* ifccParser::ass() {
  AssContext *_localctx = _tracker.createInstance<AssContext>(_ctx, getState());
  enterRule(_localctx, 14, ifccParser::RuleAss);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(ifccParser::VAR);
    setState(73);
    match(ifccParser::T__8);
    setState(74);
    expr(0);
    setState(75);
    match(ifccParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ifccParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ifccParser::ExprContext::getRuleIndex() const {
  return ifccParser::RuleExpr;
}

void ifccParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

ifccParser::ExprContext* ifccParser::ParContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

ifccParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultdivContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::MultdivContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::MultdivContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::MultdivContext::MultdivContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::MultdivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitMultdiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ValueContext ------------------------------------------------------------------

ifccParser::ValContext* ifccParser::ValueContext::val() {
  return getRuleContext<ifccParser::ValContext>(0);
}

ifccParser::ValueContext::ValueContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddplusContext ------------------------------------------------------------------

std::vector<ifccParser::ExprContext *> ifccParser::AddplusContext::expr() {
  return getRuleContexts<ifccParser::ExprContext>();
}

ifccParser::ExprContext* ifccParser::AddplusContext::expr(size_t i) {
  return getRuleContext<ifccParser::ExprContext>(i);
}

ifccParser::AddplusContext::AddplusContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any ifccParser::AddplusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitAddplus(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ExprContext* ifccParser::expr() {
   return expr(0);
}

ifccParser::ExprContext* ifccParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ifccParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ifccParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, ifccParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(83);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ifccParser::T__2: {
        _localctx = _tracker.createInstance<ParContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(78);
        match(ifccParser::T__2);
        setState(79);
        expr(0);
        setState(80);
        match(ifccParser::T__3);
        break;
      }

      case ifccParser::CONST:
      case ifccParser::VAR: {
        _localctx = _tracker.createInstance<ValueContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(82);
        val();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(93);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(91);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultdivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(86);
          dynamic_cast<MultdivContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & ((1ULL << ifccParser::T__9)
            | (1ULL << ifccParser::T__10)
            | (1ULL << ifccParser::T__11))) != 0))) {
            dynamic_cast<MultdivContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(87);
          expr(4);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddplusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(89);
          dynamic_cast<AddplusContext *>(_localctx)->OP = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == ifccParser::T__12

          || _la == ifccParser::T__13)) {
            dynamic_cast<AddplusContext *>(_localctx)->OP = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(90);
          expr(3);
          break;
        }

        } 
      }
      setState(95);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FonctionContext ------------------------------------------------------------------

ifccParser::FonctionContext::FonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ifccParser::ExprContext* ifccParser::FonctionContext::expr() {
  return getRuleContext<ifccParser::ExprContext>(0);
}

tree::TerminalNode* ifccParser::FonctionContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}


size_t ifccParser::FonctionContext::getRuleIndex() const {
  return ifccParser::RuleFonction;
}

antlrcpp::Any ifccParser::FonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitFonction(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::FonctionContext* ifccParser::fonction() {
  FonctionContext *_localctx = _tracker.createInstance<FonctionContext>(_ctx, getState());
  enterRule(_localctx, 18, ifccParser::RuleFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(103);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(96);
      dynamic_cast<FonctionContext *>(_localctx)->Name = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ifccParser::T__14

      || _la == ifccParser::T__15)) {
        dynamic_cast<FonctionContext *>(_localctx)->Name = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(97);
      expr(0);
      setState(98);
      match(ifccParser::T__16);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      dynamic_cast<FonctionContext *>(_localctx)->Name = _input->LT(1);
      _la = _input->LA(1);
      if (!(_la == ifccParser::T__15

      || _la == ifccParser::T__17)) {
        dynamic_cast<FonctionContext *>(_localctx)->Name = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(101);
      match(ifccParser::VAR);
      setState(102);
      match(ifccParser::T__16);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValContext ------------------------------------------------------------------

ifccParser::ValContext::ValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ifccParser::ValContext::CONST() {
  return getToken(ifccParser::CONST, 0);
}

tree::TerminalNode* ifccParser::ValContext::VAR() {
  return getToken(ifccParser::VAR, 0);
}


size_t ifccParser::ValContext::getRuleIndex() const {
  return ifccParser::RuleVal;
}

antlrcpp::Any ifccParser::ValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ifccVisitor*>(visitor))
    return parserVisitor->visitVal(this);
  else
    return visitor->visitChildren(this);
}

ifccParser::ValContext* ifccParser::val() {
  ValContext *_localctx = _tracker.createInstance<ValContext>(_ctx, getState());
  enterRule(_localctx, 20, ifccParser::RuleVal);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    _la = _input->LA(1);
    if (!(_la == ifccParser::CONST

    || _la == ifccParser::VAR)) {
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

bool ifccParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ifccParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ifccParser::_decisionToDFA;
atn::PredictionContextCache ifccParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ifccParser::_atn;
std::vector<uint16_t> ifccParser::_serializedATN;

std::vector<std::string> ifccParser::_ruleNames = {
  "axiom", "prog", "return_stmt", "formule", "more", "dec", "deca", "ass", 
  "expr", "fonction", "val"
};

std::vector<std::string> ifccParser::_literalNames = {
  "", "'int'", "'main'", "'('", "')'", "'{'", "'}'", "';'", "','", "'='", 
  "'*'", "'/'", "'%'", "'+'", "'-'", "'putchar('", "'other'", "');'", "'getchar('", 
  "'return'"
};

std::vector<std::string> ifccParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "RETURN", "CONST", "VAR", "COMMENT", "DIRECTIVE", "WS"
};

dfa::Vocabulary ifccParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ifccParser::_tokenNames;

ifccParser::Initializer::Initializer() {
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

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1a, 0x6e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x5, 0x6, 0x41, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x5, 0xa, 0x56, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x5e, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x61, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6a, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x2, 0x3, 0x12, 0xd, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x2, 0x7, 0x3, 0x2, 0xc, 0xe, 0x3, 0x2, 0xf, 0x10, 0x3, 
    0x2, 0x11, 0x12, 0x4, 0x2, 0x12, 0x12, 0x14, 0x14, 0x3, 0x2, 0x16, 0x17, 
    0x2, 0x6c, 0x2, 0x18, 0x3, 0x2, 0x2, 0x2, 0x4, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x24, 0x3, 0x2, 0x2, 0x2, 0x8, 0x39, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0xc, 0x42, 0x3, 0x2, 0x2, 0x2, 0xe, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x12, 0x55, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x69, 0x3, 0x2, 0x2, 0x2, 0x16, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x19, 0x5, 0x4, 0x3, 0x2, 0x19, 0x1a, 0x7, 0x2, 0x2, 
    0x3, 0x1a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x3, 0x2, 0x2, 
    0x1c, 0x1d, 0x7, 0x4, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x5, 0x2, 0x2, 0x1e, 
    0x1f, 0x7, 0x6, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x7, 0x2, 0x2, 0x20, 0x21, 
    0x5, 0x8, 0x5, 0x2, 0x21, 0x22, 0x5, 0x6, 0x4, 0x2, 0x22, 0x23, 0x7, 
    0x8, 0x2, 0x2, 0x23, 0x5, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x7, 0x15, 
    0x2, 0x2, 0x25, 0x26, 0x5, 0x12, 0xa, 0x2, 0x26, 0x27, 0x7, 0x9, 0x2, 
    0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x7, 0x3, 0x2, 0x2, 
    0x29, 0x2a, 0x5, 0xe, 0x8, 0x2, 0x2a, 0x2b, 0x7, 0x9, 0x2, 0x2, 0x2b, 
    0x2c, 0x5, 0x8, 0x5, 0x2, 0x2c, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 
    0x7, 0x3, 0x2, 0x2, 0x2e, 0x2f, 0x5, 0xc, 0x7, 0x2, 0x2f, 0x30, 0x7, 
    0x9, 0x2, 0x2, 0x30, 0x31, 0x5, 0x8, 0x5, 0x2, 0x31, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x33, 0x5, 0x10, 0x9, 0x2, 0x33, 0x34, 0x5, 0x8, 0x5, 
    0x2, 0x34, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x5, 0x14, 0xb, 0x2, 
    0x36, 0x37, 0x5, 0x8, 0x5, 0x2, 0x37, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x39, 0x28, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x32, 0x3, 0x2, 0x2, 0x2, 0x39, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x3b, 0x3c, 0x7, 0xa, 0x2, 0x2, 0x3c, 0x41, 0x5, 0xc, 0x7, 
    0x2, 0x3d, 0x3e, 0x7, 0xa, 0x2, 0x2, 0x3e, 0x41, 0x5, 0xe, 0x8, 0x2, 
    0x3f, 0x41, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x17, 0x2, 0x2, 0x43, 0x44, 0x5, 
    0xa, 0x6, 0x2, 0x44, 0xd, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x17, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0xb, 0x2, 0x2, 0x47, 0x48, 0x5, 0x12, 0xa, 
    0x2, 0x48, 0x49, 0x5, 0xa, 0x6, 0x2, 0x49, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x4b, 0x7, 0x17, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0xb, 0x2, 0x2, 0x4c, 
    0x4d, 0x5, 0x12, 0xa, 0x2, 0x4d, 0x4e, 0x7, 0x9, 0x2, 0x2, 0x4e, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x8, 0xa, 0x1, 0x2, 0x50, 0x51, 0x7, 
    0x5, 0x2, 0x2, 0x51, 0x52, 0x5, 0x12, 0xa, 0x2, 0x52, 0x53, 0x7, 0x6, 
    0x2, 0x2, 0x53, 0x56, 0x3, 0x2, 0x2, 0x2, 0x54, 0x56, 0x5, 0x16, 0xc, 
    0x2, 0x55, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x56, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0xc, 0x5, 0x2, 0x2, 0x58, 
    0x59, 0x9, 0x2, 0x2, 0x2, 0x59, 0x5e, 0x5, 0x12, 0xa, 0x6, 0x5a, 0x5b, 
    0xc, 0x4, 0x2, 0x2, 0x5b, 0x5c, 0x9, 0x3, 0x2, 0x2, 0x5c, 0x5e, 0x5, 
    0x12, 0xa, 0x5, 0x5d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5a, 0x3, 0x2, 
    0x2, 0x2, 0x5e, 0x61, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x9, 0x4, 0x2, 0x2, 0x63, 
    0x64, 0x5, 0x12, 0xa, 0x2, 0x64, 0x65, 0x7, 0x13, 0x2, 0x2, 0x65, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x9, 0x5, 0x2, 0x2, 0x67, 0x68, 0x7, 
    0x17, 0x2, 0x2, 0x68, 0x6a, 0x7, 0x13, 0x2, 0x2, 0x69, 0x62, 0x3, 0x2, 
    0x2, 0x2, 0x69, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x6b, 0x6c, 0x9, 0x6, 0x2, 0x2, 0x6c, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x39, 0x40, 0x55, 0x5d, 0x5f, 0x69, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ifccParser::Initializer ifccParser::_init;
