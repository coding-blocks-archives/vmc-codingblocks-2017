// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void printArr(int a[][20], int szeOfArr){

    for(int i = 0; i < szeOfArr; ++i){
        a[i][1] +=1;
        // cout << a[i] << " ";
    }
}

int main() {

    int arr[10][20] = {1,2,3};
    printArr(arr, 3);
    cout << arr[0];
    
}