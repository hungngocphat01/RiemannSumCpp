#  Infix expression evaluator

## Author
* Name: Hùng Ngọc Phát
* Student ID: 19120615
* Class: 19CTT4

## Input/output
* input.txt: contains an infix expression as a string.
* output.txt: contains a float which is evaluated from the given expression if there is no syntax error. Else, contains a string that describe the error while parsing/evaluating the given expression.

## Source code structure
* **main.cpp**: contains the main function.
* **InfixToPostfix**: defines the function to convert an infix expression (of string type) to a postfix expression (of string type)
* **PostfixEval**: contains the function to evaluate a postfix expression (of string type). Returns a float if evaluated successfully. Else, throws a runtime_error.
* **StackChar**: contains definitions and methods for a stack of char type, which lies underneath InfixToPostfix.
* **StackFloat**: contains definitions and methods for a stack of float type, which lies underneath PostfixEval.
* **Utils**: contains inline functions that are shared between InfixToPosfix and PostfixEval.


