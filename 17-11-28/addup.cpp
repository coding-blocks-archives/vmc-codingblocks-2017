// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void AddUp(int arr[], int N){
    for(int i = 0; i < N; ++i){
        if (i % 2 == 0){
            arr[i] = arr[i] + arr[i + 1];
        }
        else {
            arr[i] += 10;
        }
    }
}


int main() {
    int arr[10] = {1, 2, 3};

    AddUp(arr, 10);
    for(int i = 0; i < 10; ++i) cout << arr[i] << " ";
    
}