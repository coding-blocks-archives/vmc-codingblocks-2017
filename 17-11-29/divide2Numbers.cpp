#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;

    cin >> dividend >> divisor;

    //divide
    if (divisor != 0) {
        float quotient = (float)dividend / divisor;

        //print
        cout << quotient;
    }
    else {
        cout << "Cant divide by zero";
    }
}