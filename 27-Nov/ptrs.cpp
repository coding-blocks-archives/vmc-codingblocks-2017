// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int a = 100;
    int *x = NULL;     //ptr declaration

    x = &a;     //assignment
    cout << *x << endl; //value at x
    cout << x << endl; //value OF x

}