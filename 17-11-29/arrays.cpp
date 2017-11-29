// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    
    //sum N numbers
    //create an array
    int arr[10];

    //input N
    int N;
    cin >> N;

    //input N numbers
    int i = 0;
    for(i = 0; i < N; ++i){
        cin >> arr[i];
    }
    //sum N numbers
    int sum;
    sum = 0;
    for(i = 0; i < N; ++i){
        sum = sum + arr[i];
    }

    //print N
    cout << sum << endl;`

}