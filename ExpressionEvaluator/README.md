#  Infix expression evaluator

## Author
* Name: Hùng Ngọc Phát
* Student ID: 19120615
* Class: 19CTT4

## Input/output
* Parameters:
* No parameter: read and evaluate an INFIX expression in "input.txt".
* -i: evaluate a infix expression.
* -s or -p: evaluate a suffix/postfix expression
* -f: read from file. Must specify -i/-s/-p.

* input.txt: contains an expression of string type.
* output.txt: contains the result. Additionally includes suffix expression if converted from infix expression.

## Source code structure
* **main.cpp**: contains the main function.
* **InfixToPostfix**: defines the function to convert an infix expression (of string type) to a postfix expression (of string type)
* **PostfixEval**: contains the function to evaluate a postfix expression (of string type). Returns a float if evaluated successfully. Else, throws a runtime_error.
* **StackChar**: contains definitions and methods for a stack of char type, which lies underneath InfixToPostfix.
* **StackFloat**: contains definitions and methods for a stack of float type, which lies underneath PostfixEval.
* **Utils**: contains inline functions that are shared between InfixToPosfix and PostfixEval.
* **FileRW**: contains functions to read and write to file
* **makefile**: make rule for GNU make. Pass 'win' to compile for Windows (default). Pass 'unix' to compile for a Unix-like OS. Resulting binary only differs in filename (Windows has a '.exe' extension, whereas Unix-like OS doesn't).


