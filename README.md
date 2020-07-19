# Riemann Sum Evaluator (Mid-term)

## Author
* Name: Hùng Ngọc Phát
* Student ID: 19120615
* Class: 19CTT4, Ho Chi Minh University of Science.

## Input parameter
* Parameters:
```bash
$ ./RiemannSum <expression> <interval>
```
* Example: 
```bash
$ ./RiemannSum '2*x + x^2 + 3*x^(1/2)' 1 2
```

## Source code structure
* ``main.cpp``: contains the main function which handles the commandline parameters and call sub-routines to evaluate the integral.
* ``Math/Riemann.h``: contains a function to evaluate the middle Riemann Sum.
* ``Math/Substitution.h``: contains a function to substitute a float for 'x'.
* ``Math/SyntaxCheck.h``: first pass syntax checking.
* ``PostfixEval``: contains the function to evaluate a postfix expression (of string type). Returns a float if evaluated successfully. Else, throws a runtime_error.
* ``InfixToPostfix``: defines the function to convert an infix expression (of string type) to a postfix expression (of string type). Note that more syntax error checking are done in this file than in ``PostfixEval`` because this is what an actual human uses in practice, not the computer-ish postfix expression.
* ``StackChar``: contains definitions and methods for a stack of ``char`` type, which lies underneath ``InfixToPostfix``.
* ``StackFloat``: contains definitions and methods for a stack of ``float`` type, which lies underneath ``PostfixEval``.
* ``Utils``: contains inline functions that are shared between ``InfixToPosfix`` and ``PostfixEval``.
* ``makefile``: make rule for GNU make. Built binary will be placed in BUILD folder.<br> **Warning**: a suitable g++ executable path ``$(G++)`` must be re-specified in ``makefile``.

## Building
* This repository can be built by running GNU make in the same folder with ```makefile```.
    ```bash
    $ make
    ```
* Be sure to set the ``g++`` path (``$(G++)``) correctly in ``makefile``. The default path is ``g++``.
    * On Windows, install ``mingw-64`` and add it to ``PATH``, then set ``$(G++) := g++``.
    * On Linux, such as Debian-based distros, install ``build-essential`` from ``apt``, then set ``$(G++) := g++``.
    * On macOS, install ``gcc`` from Homebrew, then set ``$(G++)`` accordingly to your installed gcc version. For example, ``g++-9``. You can also use ``clang++`` without having to install ``g++``. Simply set ``$(G++) := clang++``
