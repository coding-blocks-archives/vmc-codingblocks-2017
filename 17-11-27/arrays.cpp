//sum of n numbers

#include <iostream>
using namespace std;

int main(){
    int arr[10];
    int n;
    cout << "enter no of elements in the array ";
    cin >> n;

    //Input n element into the array
    int i;
    for(i = 0; i < n; ++i){
        cin  >> arr[i];
    }

    //sum of the n elements
    int sum = 0;
    for(i = 0; i < n; ++i){
        sum = sum + arr[i];
    }

    cout << "sum is " << sum << endl;
    return 0;
}