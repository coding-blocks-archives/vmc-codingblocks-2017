// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void myswap(int& x, int& y) {
    int t = x;
    x = y;
    y = t;
    // cout << x << " " << y;
}


int main() {
    int a, b;
    cin >> a >> b;

    myswap(a, b);

    cout << a << " " << b << endl;
}