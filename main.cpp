#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "antlr4-runtime.h"
#include "generated/ifccLexer.h"
#include "generated/ifccParser.h"
#include "generated/ifccBaseVisitor.h"

#include "CodeGenVisitor.h"
#include "TableCreator.h"

using namespace antlr4;
using namespace std;

int main(int argn, const char **argv)
{
  stringstream in;
  if (argn==2)
  {
     ifstream lecture(argv[1]);
     if( !lecture.good() )
     {
         cerr<<"error: cannot read file: " << argv[1] << endl ;
         exit(1);
     }
     in << lecture.rdbuf();
  }
  else
  {
      cerr << "usage: ifcc path/to/file.c" << endl ;
      exit(1);
  }
  
  ANTLRInputStream input(in.str());

  ifccLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();

  ifccParser parser(&tokens);
  tree::ParseTree* tree = parser.axiom();
  TableCreator v2;
  v2.visit(tree);
    for(map<string, int >::const_iterator it = v2.varList.begin();it != v2.varList.end(); ++it)
    {
        //cout << it->first << " " << it->second<<"\n";
    }
    for(map<string, int >::const_iterator it = v2.usedVarList.begin();it != v2.usedVarList.end(); ++it)
    {
        //cout << it->first << " " << it->second<<"\n";
        if(it->second==0){
            cout<<"variable declared but not used :"<< it->first<<endl;
        }
    }
    for(map<string, int >::const_iterator it = v2.varAdresse.begin();it != v2.varAdresse.end(); ++it)
    {
        //cout << it->first << " " << it->second<<"\n";
    }
  if(parser.getNumberOfSyntaxErrors() != 0)
  {
      cerr << "error: syntax error during parsing" << endl;
      exit(1);
  }

  
  CodeGenVisitor v;
  v.adresse=v2.adresse;
  v.varAdresse=v2.varAdresse;
  v.visit(tree);

  return 0;
}
