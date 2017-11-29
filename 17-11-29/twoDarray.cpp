// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    // create a 2D array
    int arr[10][10];

    // input a 2D array
    int rows, columns;
    cin >> rows >> columns;
    // input data
    int r, c;
    for(r = 0; r < rows; ++r){
        for(c = 0; c < columns; c++){
            cin >> arr[r][c];
        }
    }   

    // print the diagonal elements
    for(r = 0; r < rows; ++r){
        cout << arr[r][r] << " ";
    }

}