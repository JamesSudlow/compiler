#include "TableCreator.h"


antlrcpp::Any TableCreator::visitDec(ifccParser::DecContext *ctx)
{
	if(varList.contains(ctx->VAR()->getText())){
		cerr<<"Declares an already declared variable"<<endl;
        exit(1);

	}
	else{
		string name=ctx->VAR()->getText();
		usedVarList.insert({name,-1});
		varList.insert({name,0});
		varAdresse.insert({name,adresse});
		adresse+=-4;
	}
	this->visit(ctx->more());
    return 0;
}
antlrcpp::Any TableCreator::visitDeca(ifccParser::DecaContext *ctx) {
	string name=ctx->VAR()->getText();
	if(varList.contains(name)){
		cerr<<"Declares an already declared variable"<<endl;
        exit(1);
	}
	else{
		usedVarList.insert({name,0});
		varList.insert({name,this->visit(ctx->expr())});
		varAdresse.insert({name,adresse});
		adresse+=-4;
	}
	this->visit(ctx->more());
    return 0;
}
  antlrcpp::Any TableCreator::visitMore(ifccParser::MoreContext *ctx){
	if(ctx->dec()!=nullptr){
		this->visit(ctx->dec());
	}
	if(ctx->deca()!=nullptr){
		this->visit(ctx->deca());
	}
	return 0;
  }
antlrcpp::Any TableCreator::visitAss(ifccParser::AssContext *ctx){
	string name=ctx->VAR()->getText();
	if(varList.contains(name)){
		if(usedVarList.find(name)->second==-1){
			usedVarList[name]=0;
		}
		int i=this->visit(ctx->expr());
		varList[name]=i;

	}
	else{
		cerr<<"Sets value to undeclared variable"<<endl;
        exit(1);

	}	
    return 0;

}

antlrcpp::Any TableCreator::visitVal(ifccParser::ValContext *ctx) {
    if(ctx->CONST()!=nullptr){
		return stoi(ctx->CONST()->getText());
    }
    else{
    	if(varList.contains(ctx->VAR()->getText()) && usedVarList.find(ctx->VAR()->getText())->second!=-1){
			usedVarList[ctx->VAR()->getText()]++;
			return varList.find(ctx->VAR()->getText())->second;
		}
		else{
			cerr<<"Uses variable that's either undeclared or doesn't have a set value"<<endl;
        	exit(1);
			return 0;

		}
    }
}
antlrcpp::Any TableCreator::visitReturn_stmt(ifccParser::Return_stmtContext *ctx) {
	this->visit(ctx->expr());
	return 0;
}
	antlrcpp::Any TableCreator::visitPar(ifccParser::ParContext *ctx) {

		return this->visit(ctx->expr());
	
	}
  	antlrcpp::Any TableCreator::visitMultdiv(ifccParser::MultdivContext *ctx) {
		string s= ctx->OP->getText();
		int a=this->visit(ctx->expr(0));
		int b=this->visit(ctx->expr(1));
		if(s=="*"){
			return a*b;
		}
		if(s=="/"){
			return a/b;
		}
		if(s=="%"){
			return a%b;
		}
		exit(1);
		return 0;
  	}
	antlrcpp::Any TableCreator::visitAddplus(ifccParser::AddplusContext *ctx) {
		string s= ctx->OP->getText();
		int a=this->visit(ctx->expr(0));
		int b=this->visit(ctx->expr(1));
		if(s=="+"){
			return a+b;
		}
		else{
			return a-b;
		}
	}

  	antlrcpp::Any TableCreator::visitValue(ifccParser::ValueContext *ctx) {
    	return 	this->visit(ctx->val());
  	}
