#include <iostream>
#include <stack>
#include <unordered_map>
#include <cmath>

#include "ExpressionConverter.h"

using namespace std;

class FinishedConverter : ExpressionConverter
{
private:
    unordered_map<string, int> operatorPrecedence;

public:
    FinishedConverter()
    {
        operatorPrecedence["+"] = 1;
        operatorPrecedence["-"] = 1;
        operatorPrecedence["*"] = 2;
        operatorPrecedence["/"] = 2;
        operatorPrecedence["^"] = 2;
    }

    string convertToPostfix(string infix)
    {
        string postfix = "";
        stack<string> operatorStack;

        istringstream stream(infix);
        string c;

        while (getline(stream, c, ' '))
        {
            if (c == " ")
            {
                continue;
            }
            else if (c == "(")
            {
                operatorStack.push(c);
            }
            else if (c == ")")
            {
                while (operatorStack.size() > 0 && operatorStack.top() != "(")
                {
                    postfix += operatorStack.top();
                    postfix += " ";
                    operatorStack.pop();
                }
                operatorStack.pop();
            }
            else if (operatorPrecedence.find(c) == operatorPrecedence.end())
            {
                postfix += c;
                postfix += " ";
            }
            else
            {
                while (operatorStack.size() > 0 && operatorPrecedence[operatorStack.top()] >= operatorPrecedence[c])
                {
                    postfix += operatorStack.top();
                    postfix += " ";
                    operatorStack.pop();
                }
                operatorStack.push(c);
            }
        }

        while (operatorStack.size() > 0)
        {
            postfix += operatorStack.top();
            postfix += " ";
            operatorStack.pop();
        }

        return postfix.substr(0, postfix.length() - 1);
    }

    int evaluatePostfix(string postfix)
    {
        stack<int> vals;

        istringstream stream(postfix);
        string c;

        while (getline(stream, c, ' '))
        {
            if (operatorPrecedence.find(c) == operatorPrecedence.end())
            {
                vals.push(stoi(c));
            }
            else
            {
                int right = vals.top();
                vals.pop();
                int left = vals.top();
                vals.pop();

                if (c == "+")
                    vals.push(left + right);
                else if (c == "-")
                    vals.push(left - right);
                else if (c == "/")
                    vals.push(left / right);
                else if (c == "*")
                    vals.push(left * right);
                else
                    vals.push(pow(left, right));
            }
        }

        return vals.top();
    }
};