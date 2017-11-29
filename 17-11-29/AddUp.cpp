// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void AddUp(int Arr[], int N){
    for(int i = 0; i < N; ++i){
        if (i % 2 == 0){
            Arr[i] = Arr[i] + Arr[i + 1];
        }
        else {
            Arr[i] = Arr[i] + 10;
            // Arr[i] += 10;
        }
    }
}

int main() {
    
}