#include <iostream>
using namespace std;

int main() {
    int divisor, dividened;

    cin >> dividened >> divisor;
    float quotient;

    if (divisor != 0) {
         quotient = (float)dividened / divisor;

    }
    else {
        cout << quotient;
        cout << "Sorry! Can't divide by Zero;";
    }

    return 0;
}