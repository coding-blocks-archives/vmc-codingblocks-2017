// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;
int main() {
    
    //create an array
    int arr[10];
    //input nos into it
    int n;
    cin >> n;

    int i;
    for(i = 0; i < n; ++i){
        cin >> arr[i];
    }
    //sum the array
    int sum = 0;
    for(i = 0; i < n; ++i){
        sum  = sum + arr[i];
    }

    //print the sum
    cout << sum;

}