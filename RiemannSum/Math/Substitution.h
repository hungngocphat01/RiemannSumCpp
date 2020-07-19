#ifndef Substitution_h
#define Substitution_h

#include <string>
#include <iostream>
#include "../InfixToPostfix/InfixToPostfix.h"
#include "../PostfixEval/PostfixEval.h"
using namespace std;

// Function for substituting f -> f(x)
float subs(string f, float x) {
    // Result of substitution
    float result = 0;
    
    try {
        // Replace 'x' into the float parameter
        unsigned long pos = -1;
        do {
            pos = f.find("x");
            if (pos == -1) {
                break;
            }
            f.replace(pos, 1, to_string(x));
        } while (pos != -1);
        
        // Convert to postfix expression and evaluate it
        string postfix = infix_to_postfix(f);
        result = postfix_eval(postfix);
    }
    catch (const exception& e) {
        throw;
    }
    
    return result;
}

#endif /* Substitution_h */
