#pragma once
using namespace std;
#include <iostream>
#include "antlr4-runtime.h"
#include "generated/ifccBaseVisitor.h"
#include <map>

class  TableCreator : public ifccBaseVisitor {
	public:
	int adresse=-4;
	map<string,int> varAdresse;
	map<string,int> varList;
	map<string,int> usedVarList;
  	virtual antlrcpp::Any visitDec(ifccParser::DecContext *ctx) override;
    virtual antlrcpp::Any visitVal(ifccParser::ValContext *ctx) override;
  	virtual antlrcpp::Any visitDeca(ifccParser::DecaContext *ctx) override;
  	virtual antlrcpp::Any visitAss(ifccParser::AssContext *ctx) override;
	virtual antlrcpp::Any visitReturn_stmt(ifccParser::Return_stmtContext *ctx) override;
  	virtual antlrcpp::Any visitPar(ifccParser::ParContext *ctx) override;
  	virtual antlrcpp::Any visitMultdiv(ifccParser::MultdivContext *ctx) override;
  	virtual antlrcpp::Any visitAddplus(ifccParser::AddplusContext *ctx) override;
  	virtual antlrcpp::Any visitValue(ifccParser::ValueContext *ctx) override;
  	virtual antlrcpp::Any visitMore(ifccParser::MoreContext *ctx) override;

};

