// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void updateArr(int arr[100], int sizeofArray){
    for(int i = 0; i < sizeofArray; ++i){
        arr[i] = arr[i] + 2;
    }
}


int main() {
    int arr[4];

    for(int i = 0; i < 4; ++i){
        cin >> arr[i];
    }

    updateArr(arr, 4);

    //print arr
    for(int j = 0; j < 4; ++j){
        cout << arr[j] << endl;
    }   
}