#pragma once
using namespace std;
#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include <map>

class  CodeGenVisitor : public ifccBaseVisitor {
	public:
    int adresse;
    map<string,int> varAdresse;
    virtual antlrcpp::Any visitProg(ifccParser::ProgContext *ctx) override ;
    virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
    virtual antlrcpp::Any visitVal(ifccParser::ValContext *ctx) override;
  	virtual antlrcpp::Any visitDeca(ifccParser::DecaContext *ctx) override;
  	virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override;
  	virtual antlrcpp::Any visitAss(ifccParser::AssContext *ctx) override;
  	virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override;
  	virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *ctx) override;
  	virtual antlrcpp::Any visitAddplus(ifccParser::AddplusContext *ctx) override;
  	virtual antlrcpp::Any visitValue(ifccParser::ValueContext *ctx) override;
  	virtual antlrcpp::Any visitMore(ifccParser::MoreContext *ctx) override;

};

