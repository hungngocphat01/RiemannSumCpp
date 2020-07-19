#include <iostream>
#include "Math/Riemann.h"
using namespace std;

int main(int argc, char** argv) {
    if (argc <= 1) {
        cout << "Error: no expression was passed to the program." << endl;
        cout << "Example: RiemannSum '3*x^7+2*x^(1/2)' 1 2" << endl;
    }
    else if (argc < 4) {
        cout << "Error: interval not specified." << endl;
        cout << "Example: RiemannSum '3*x^7+2*x^(1/2)' 1 2" << endl;
    }
    else {
        try {
            string f = string(argv[1]);
            float a = stof(argv[2]);
            float b = stof(argv[3]);
            float result = riemann(f, a, b);
            cout << "Result: " << result << endl;
        }
        catch (const invalid_argument& e) {
            cout << "Error: Invalid interval." << endl;
        }
        catch (const exception& e) {
            cout << "Exception: " << endl << e.what() << endl;
        }
    }
    return 0;
}
