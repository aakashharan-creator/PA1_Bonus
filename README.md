# Programming Assignment 1 Bonus
## Infix-Postfix Converter and Evaluator

In this assignment, you will implement an infix to postfix converter as well a postfix expression evaluator. Completing this assignment **requires a completed stack implementation from Programming Assignment 1**. This assignment aims to further the understanding of the stack data structure beyond its implementation. 

## Table of Contents

- [Assignment Description](#project-description)
  - [Functionality Requirements](#functionality-requirements)
  - [Memory Checks](#memory-checks)
- [Testing and Validation](#testing-and-validation)
- [Submission Guidelines](#submission-guidelines)

## Project Description

In this bonus programming assignment, **you are only expected to modify StackArrayDouble.h, StackArrayLinear.h and StackLinkedList.h**. You are provided with an additional file **AbstractStack.h** which defines the base class from which the other three implementations are derived.

The following functions have been defined in the abstract class and must be implemented in each of the three derived implementations along with their respective constructors and destructors. This is where you come in :)

```cpp
virtual bool isEmpty() = 0;
virtual int size() = 0;
virtual T &top() = 0;
virtual T pop() = 0;
virtual void push(const T &e) = 0;
```

### Functionality Requirements 

```cpp
virtual bool isEmpty() = 0;
```
* `isEmpty` returns whether the current state of the stack is empty i.e. is the current size equal to 0.

```cpp
virtual int size() = 0;
```
* `size` returns the current number of items present in the stack

```cpp
virtual T &top() = 0;
```
* `top` returns the value of the item presently at the top of the stack i.e. the most recently pushed value. If the stack is empty throw an `out_of_range` exception

```cpp
virtual T pop() = 0;
```
* `pop` returns the value at the top of the stack, similar to `top` but also removes this item from the stack. You are also expected to throw an `out_of_range` exception if the stack is empty

```cpp
virtual void push(const T& e) = 0
```
* `push` takes in a value of type `T` and pushes it to the top of the stack.

### Memory Checks

Along with implementing the actual data structure itself, you are expected to ensure your code has no memory leaks as well or there will be a point deduction. We will go into further detail on how to detect memory leaks below.

## Testing and Validation

In order to test and validate the running of your code there are a few commands to help you along with a `main.cpp` file if you would like to do your own testing. 

The provided `makefile` grants you some testing functionality with the following commands

`make set` 
* Sets up the testing environment and compiles your code. Make sure to run this command each time you test your code.

`make double_test`
* Runs the test cases for the StackArrayDouble implementation along with a memory check

`make linear_test`
* Runs the test cases for the StackArrayLinear implementation along with a memory check

`make linked_test`
* Runs the test cases for the StackLinkedList implementation along with a memory check

## Report Requirements

You will write a brief report that includes theoretical analysis, a
description of your experiments, and discussion of your results. At
a minimum, your report should include the following sections:
1. Introduction (5 points): In this section, you should describe the objective of this assignment.
2. Theoretical Analysis (10 points): In this section, you should provide an analysis of the complexity of a push operation to the extent that has been presented in lecture discussion. Answer the following key points
* Describe the effect of a push operation and the advantages and disadvantages of the three strategies. 
* What is the complexity of a push (on average) for the different implementations? 
* What is the worst case complexity for the different implementations?

**Advisory:** It is understood that a formal discussion of
algorithmic complexity is yet to come in later modules. With that in mind, treat this as a discussion oriented section and feel free to lean on providing a qualitative analysis based on knowledge of complexity gained thus far from lecture content.

3. Experimental Results (15 points): In this section, you should compare the performance (running time) of the pus () operation in the three different implementations to one another and to their theoretical complexity.

    * Make a plot showing the running time (y-axis) vs. the
number of push operations (x-axis) for the three
implementations. You must use some electronic tool
(matlab, gnuplot, excel, ...) to create the plot.
Hand-written plots will NOT be accepted.
    * Provide a discussion of your results, which includes but is not limited to:
        * Which of the three Stack implementations performs the best? Does it depend on the input? Provide some reasoning behind your observation.
        * To what extent does the theoretical analysis agree with the experimental results? Attempt to understand and explain any discrepancies you note.

## Submission Guidelines

1. Include a PDF of your report explaining your analysis titled *FirstName-LastName-UIN-PA1.pdf*
2. Push the finished source code files and PDF to your repository