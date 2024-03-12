
// Generated from ifcc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ifccParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ifccParser.
 */
class  ifccVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ifccParser.
   */
    virtual antlrcpp::Any visitAxiom(ifccParser::AxiomContext *context) = 0;

    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFormule(ifccParser::FormuleContext *context) = 0;

    virtual antlrcpp::Any visitMore(ifccParser::MoreContext *context) = 0;

    virtual antlrcpp::Any visitDec(ifccParser::DecContext *context) = 0;

    virtual antlrcpp::Any visitDeca(ifccParser::DecaContext *context) = 0;

    virtual antlrcpp::Any visitAss(ifccParser::AssContext *context) = 0;

    virtual antlrcpp::Any visitPar(ifccParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *context) = 0;

    virtual antlrcpp::Any visitValue(ifccParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitAddplus(ifccParser::AddplusContext *context) = 0;

    virtual antlrcpp::Any visitFonction(ifccParser::FonctionContext *context) = 0;

    virtual antlrcpp::Any visitVal(ifccParser::ValContext *context) = 0;


};

