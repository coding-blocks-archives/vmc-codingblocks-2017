// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void mySwap(int a, int b){
    int t = a;
    a = b;
    b = t;

}


int main() {
    int x, y;
    cin >> x >> y;

    mySwap(x,y);
    
    cout << x << y; 

    
}