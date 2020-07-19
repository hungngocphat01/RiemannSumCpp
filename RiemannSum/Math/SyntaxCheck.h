#ifndef SyntaxCheck_h
#define SyntaxCheck_h

#include <string>
#include <stdexcept>
#include <exception>
#include "../Utils/Utils.h"

// First pass syntax error check
// Throw an exception if checking fails
void SyntaxCheck(string f) {
    for (unsigned i = 0; i < f.size(); i++) {
        if (i > 0 && f[i] == 'x' && !isoperator(f[i - 1])) {
            throw std::runtime_error("Syntax error: unexpected non-operator or non-operand before 'x'");
        }
        else if (i < f.size() - 1 && f[i] == 'x' && !isoperator(f[i + 1])) {
            throw std::runtime_error("Syntax error: unexpected non-operator after 'x'");
        }
    }
}

#endif /* SyntaxCheck_h */
