#include <iostream>
#include "InfixToPostfix.h"
#include "PostfixEval.h"
#include <string>

using namespace std;

int main() {
    string infix = "";
    string suffix;
    try {
        suffix = infix_to_postfix(infix);
        cout << "Infix: " << infix << endl;
        cout << "Suffix: " << suffix << endl;
        cout << "Value: " << postfix_eval(suffix) << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
