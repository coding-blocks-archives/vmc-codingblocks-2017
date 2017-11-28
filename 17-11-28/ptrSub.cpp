// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    int arr[10];
    int * p1, * p2;

    p1 = &arr[0];
    p2 = &arr[3];
    cout << p1 - p2;

}