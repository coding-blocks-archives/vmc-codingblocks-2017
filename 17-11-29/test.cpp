// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void test(int& x){
    cout << x;
}

int main() {
    int x = 20;
    test(x);   
}