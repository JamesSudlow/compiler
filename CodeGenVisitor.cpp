#include "CodeGenVisitor.h"

antlrcpp::Any CodeGenVisitor::visitProg(ifccParser::ProgContext *ctx) 
{
    cout<< ".globl main\n" ;
    cout<< " main: \n" ;
    cout<<"    pushq %rbp\n";
    cout<<"    movq %rsp, %rbp\n";
	//need to increment address in table creator.
	cout<<"	subq	$"<<-1*(end/16-2)*16<<", %rsp"<<endl;

    this->visit( ctx->formule());
    this->visit( ctx->return_stmt() );
    cout<<"    movl %ebp, %esp\n";
	cout<<"	popl %ebp\n";   
    cout<<"    ret\n";

	return 0;
}


antlrcpp::Any CodeGenVisitor::visitReturn_stmt(ifccParser::Return_stmtContext *ctx)
{
    int memVal=	this->visit(ctx->expr());
    cout<<"    movl "<<memVal<<"(%rbp), %eax\n" ;
    return 0;
}
antlrcpp::Any CodeGenVisitor::visitVal(ifccParser::ValContext *ctx) {
    if(ctx->CONST()!=nullptr){
        cout << "    movl $"<<stoi(ctx->CONST()->getText())<<", "<<adresse<<"(%rbp)"<<endl;
        adresse+=-4;
		return adresse+4;
    }
    else{
		return varAdresse.find(ctx->VAR()->getText())->second;	
    }
}
  antlrcpp::Any CodeGenVisitor::visitMore(ifccParser::MoreContext *ctx){
	if(ctx->dec()!=nullptr){
		this->visit(ctx->dec());
	}
	if(ctx->deca()!=nullptr){
		this->visit(ctx->deca());
	}
	return 0;
  }
antlrcpp::Any CodeGenVisitor::visitDec(ifccParser::DecContext *ctx){
	this->visit(ctx->more());
    return 0;
}
antlrcpp::Any CodeGenVisitor::visitDeca(ifccParser::DecaContext *ctx){
    int memVal=visit(ctx->expr());
    cout<<"    movl "<<memVal<<"(%rbp), "<<"%eax"<<endl;
    cout<<"    movl "<<"%eax, "<<varAdresse.find(ctx->VAR()->getText())->second<<"(%rbp)"<<endl;
	this->visit(ctx->more());
    return 0;
}
antlrcpp::Any CodeGenVisitor::visitAss(ifccParser::AssContext *ctx){
    int memVal=visit(ctx->expr());
    cout<<"    movl "<<memVal<<"(%rbp), "<<"%eax"<<endl;
    cout<<"    movl "<<"%eax, "<<varAdresse.find(ctx->VAR()->getText())->second<<"(%rbp)"<<endl;
    return 0;
}
	antlrcpp::Any CodeGenVisitor::visitPar(ifccParser::ParContext *ctx) {
		return this->visit(ctx->expr());
	
	}
  	antlrcpp::Any CodeGenVisitor::visitMultdiv(ifccParser::MultdivContext *ctx){
		string s= ctx->OP->getText();
		int a=this->visit(ctx->expr(0));
		int b=this->visit(ctx->expr(1));
		if(s=="*"){
			cout<<"    movl "<<a<<"(%rbp), %eax"<<endl;
			cout<<"    movl "<<b<<"(%rbp), %ebx"<<endl;
			cout<<"	imull %ebx, %eax"<<endl;
			cout << "    movl %eax, "<<adresse<<"(%rbp)"<<endl;
		}
		else{
    		cout<<"    movl "<<a<<"(%rbp), %eax"<<endl;
			cout<<"	cltd"<<endl;
			cout<<"	idivl "<<b<<"(%rbp)"<<endl;
			if(s=="/"){
        		cout << "    movl %eax, "<<adresse<<"(%rbp)"<<endl;
			}
			else{
        		cout << "    movl %edx, "<<adresse<<"(%rbp)"<<endl;
			}
		}
        adresse+=-4;
		return adresse+4;
	}
  	antlrcpp::Any CodeGenVisitor::visitAddplus(ifccParser::AddplusContext *ctx){
		string s= ctx->OP->getText();
		int a=this->visit(ctx->expr(0));
		int b=this->visit(ctx->expr(1));
		if(s=="+"){
			cout<<"    movl "<<a<<"(%rbp), %eax"<<endl;
    		cout<<"    movl "<<b<<"(%rbp), %ebx"<<endl;
			cout<<"	addl %ebx, %eax"<<endl;
        	cout << "    movl %eax, "<<adresse<<"(%rbp)"<<endl;
		}
		else{
			cout<<"    movl "<<a<<"(%rbp), %eax"<<endl;
			cout<<"    movl "<<b<<"(%rbp), %ebx"<<endl;
			cout<<"	subl %ebx, %eax"<<endl;
			cout << "    movl %eax, "<<adresse<<"(%rbp)"<<endl;
		}
	    adresse+=-4;
		return adresse+4;	
	}
  	antlrcpp::Any CodeGenVisitor::visitValue(ifccParser::ValueContext *ctx) {
    	return 	this->visit(ctx->val());
  	}
  	antlrcpp::Any CodeGenVisitor::visitFonction(ifccParser::FonctionContext *ctx) {
		if(ctx->Name->getText()=="putchar("){
			if(ctx->expr()!=nullptr){
				int memVal=this->visit(ctx->expr());
				cout<<" movl "<<memVal<<"(%rbp), %eax"<<endl;
				cout<<"	movl	%eax, %edi"<<endl;
				cout<<"	call	putchar@PLT"<<endl;
				return 0;
			}
		}
		return 0;
	}