#ifndef Riemann_h
#define Riemann_h

#include <cmath>
#include "Substitution.h"
#include "SyntaxCheck.h"

// Middle Riemann sum
float riemann(string f, float a, float b, int ranges = 1000) {
    float rsum = 0; // Riemann sum
    float deltaX = static_cast<float>(abs(b - a))/ranges;
    unsigned negative = 1;
    
    if (b < a) {
        float t = b;
        b = a;
        a = t;
        negative = -1;
    }
    
    try {
        SyntaxCheck(f);
        for (unsigned i = 0; i <= ranges; i++) {
            // x_i = a + dx*i
            // x_i+1 = a + dx*(i + 1)
            // x_i* = (x_i + x_i+1)/2 = (2a + dx * (2i + 1))/2 (middle point)
            float x_i_asterisk = (2 * a + deltaX * (2 * i + 1)) / 2;
            rsum += subs(f, x_i_asterisk);
        }
    }
    catch (const exception& e) {
        throw;
    }
    return rsum * deltaX * negative;
}

#endif /* Riemann_h */
