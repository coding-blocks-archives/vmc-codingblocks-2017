// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void AddUp(int arr[], int n){
    for(int i = 0; i  < n; ++i){
        if (i % 2 == 0){
            arr[i] = arr[i] + arr[i + 1];
        }
        else {
            arr[i] += 10;
        }
    }
}

int main() {
    
}