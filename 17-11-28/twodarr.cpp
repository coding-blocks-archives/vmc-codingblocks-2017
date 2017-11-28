// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

void printDia(int arr[][10], int rows, int cols){
    for(int i = 0; i < rows; ++i){
        cout << arr[i][i] << " ";
    }
}


int main() {
    int arr[10][10];
    int nr, nc;

    cin >> nr >> nc;

    input(arr, nr, nc);
    printDia(arr, nr, nc);


}