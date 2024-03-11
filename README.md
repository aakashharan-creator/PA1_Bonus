# Programming Assignment 1 Bonus
## Infix-Postfix Converter and Evaluator

In this assignment, you will implement an infix to postfix converter as well a postfix expression evaluator. Completing this assignment **requires a completed stack implementation from Programming Assignment 1**. This assignment aims to further the understanding of the stack data structure beyond just its implementation.

## Table of Contents

- [Assignment Description](#assignment-description)
  - [Functionality Requirements](#functionality-requirements)
- [Testing and Validation](#testing-and-validation)
- [Submission Guidelines](#submission-guidelines)

## Assignment Description

In this bonus programming assignment, **you are only expected to modify FinishedConverter.h**. You are provided with an additional file **ExpressionConvert.h** which defines the base class from which you will define your converter and evaluator.

The following functions have been defined in the abstract class and must be implemented in your own finished converter.

```cpp
virtual string convertToPostfix(string infixExpression) = 0;
    virtual int evaluatePostfix(string postfixExpression)  = 0;
```

### Functionality Requirements 

```cpp
virtual string convertToPostifx(string infixExpression) = 0;
```
* `convertToPostfix` returns a string of the converted `infixExpression` to a postfix notation. *You can assume you will receive a valid infix expression. All operands and operators will be given space separated and must be output space separated*

  * `"1 + 2 * 3" &#8594; "1 2 3 * +"
  * `"( 1 + 2 ) * 3" &#8594; "1 2 + 3 *"


```cpp
virtual int evaluatePostfix(string postfixExpression) = 0;
```
* `evaluatePostfix` evaluates and returns the value of the given postfix expression. *You can assume you will receive a valid postfix expression.*

## Testing and Validation

In order to test and validate the running of your code there are a few commands to help you along with a `main.cpp` file if you would like to do your own testing. 

The provided `makefile` grants you some testing functionality with the following commands

`make set` 
* Sets up the testing environment and compiles your code. Make sure to run this command each time you test your code.

`make evaluate`
* Runs the test cases for the both the expression converter and evaluator

## Submission Guidelines

1. Push the finished source code files to your repository once you have completed