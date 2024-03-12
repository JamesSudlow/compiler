
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccVisitor.h"


/**
 * This class provides an empty implementation of ifccVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ifccBaseVisitor : public ifccVisitor {
public:

  virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFormule(ifccParser::FormuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMore(ifccParser::MoreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeca(ifccParser::DecaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAss(ifccParser::AssContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(ifccParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddplus(ifccParser::AddplusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVal(ifccParser::ValContext *ctx) override {
    return visitChildren(ctx);
  }


};

