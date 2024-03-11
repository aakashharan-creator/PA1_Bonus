#ifndef BASE_H
#define BASE_H

#include <iostream>

using namespace std;

class ExpressionConverter
{
public:
    ExpressionConverter() {};

    virtual string convertToPostfix(string infixExpression) = 0;
    virtual int evaluatePostfix(string postfixExpression)  = 0;
};

#endif
