#  Infix expression evaluator

## Author
* Name: Hùng Ngọc Phát
* Student ID: 19120615
* Class: 19CTT4, Ho Chi Minh University of Science.

## Input/output
* Parameters:
    * No parameter: read and evaluate an INFIX expression from "input.txt".
    * -i: evaluate an infix expression.
    * -s or -p: evaluate a suffix/postfix expression
    * -f: read expression from a file. Must additionally specify -i/-s/-p.

*  ``input.txt`` (default input file): contains an expression of string type.
* ``output.txt``: contains the result. Additionally includes suffix expression if converted from infix expression. Custom output filename is not supported.

## Source code structure
* ``main.cpp``: contains the main function and the parameter handling function.
* ``PostfixEval``: contains the function to evaluate a postfix expression (of string type). Returns a float if evaluated successfully. Else, throws a runtime_error.
* ``InfixToPostfix``: defines the function to convert an infix expression (of string type) to a postfix expression (of string type). Note that more syntax error checking are done in this file than in ``PostfixEval`` because this is what an actual human uses in practice, not the computer-ish postfix expression.
* ``StackChar``: contains definitions and methods for a stack of ``char`` type, which lies underneath InfixToPostfix.
* ``StackFloat``: contains definitions and methods for a stack of ``float`` type, which lies underneath PostfixEval.
* ``Utils``: contains inline functions that are shared between ``InfixToPosfix`` and ``PostfixEval``.
* ``FileRW``: contains functions to read and write to file
* ``makefile``: make rule for GNU make. Built binary will be placed in BUILD folder.\n **Warning**: a suitable g++ executable path ``$(G++)`` must be re-specified in ``makefile``.
