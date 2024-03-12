// Generated from ifcc.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ifccParser}.
 */
public interface ifccListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void enterAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#axiom}.
	 * @param ctx the parse tree
	 */
	void exitAxiom(ifccParser.AxiomContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void enterProg(ifccParser.ProgContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#prog}.
	 * @param ctx the parse tree
	 */
	void exitProg(ifccParser.ProgContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void enterReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#return_stmt}.
	 * @param ctx the parse tree
	 */
	void exitReturn_stmt(ifccParser.Return_stmtContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#formule}.
	 * @param ctx the parse tree
	 */
	void enterFormule(ifccParser.FormuleContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#formule}.
	 * @param ctx the parse tree
	 */
	void exitFormule(ifccParser.FormuleContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#dec}.
	 * @param ctx the parse tree
	 */
	void enterDec(ifccParser.DecContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#dec}.
	 * @param ctx the parse tree
	 */
	void exitDec(ifccParser.DecContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#deca}.
	 * @param ctx the parse tree
	 */
	void enterDeca(ifccParser.DecaContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#deca}.
	 * @param ctx the parse tree
	 */
	void exitDeca(ifccParser.DecaContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#ass}.
	 * @param ctx the parse tree
	 */
	void enterAss(ifccParser.AssContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#ass}.
	 * @param ctx the parse tree
	 */
	void exitAss(ifccParser.AssContext ctx);
	/**
	 * Enter a parse tree produced by {@link ifccParser#val}.
	 * @param ctx the parse tree
	 */
	void enterVal(ifccParser.ValContext ctx);
	/**
	 * Exit a parse tree produced by {@link ifccParser#val}.
	 * @param ctx the parse tree
	 */
	void exitVal(ifccParser.ValContext ctx);
}