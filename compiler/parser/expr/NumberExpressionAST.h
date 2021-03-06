#ifndef NUMBER_EXPR_AST_H
#define NUMBER_EXPR_AST_H

#include "ExpressionAST.h"

/**
 * @class NumberExpressionAST
 * @classdesc Expression class for one number
 */
class NumberExpressionAST : public ExpressionAST{
	/**
	 * [Value the current numeric value]
	 * @type double
	 */
	double Value;

	public:
		NumberExpressionAST(double value):Value(value){}
};

#endif