// #include <iostream.h>
// #include <conio.h>
#include <iostream>
using namespace std;

int main() {
    int divisor, dividend;

    //input no from user
    cout << "Plz enter dividend divisor ";
    cin >> dividend >> divisor;

    //output quotient
    if (divisor != 0) {
        float quotient = (float)dividend / divisor;
        cout << quotient << endl;
    }
    else {
        cout << "Cant divide by zero";
    }

    // getch();
}