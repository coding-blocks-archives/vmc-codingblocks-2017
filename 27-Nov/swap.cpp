// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void myswap(int& a, int& b){
    int t = b;
    b = a;
    a = t;
}

int main() {
    int x , y;
    cin >> x >> y;

    myswap(x,y);
    cout << x << " " << y;    

}