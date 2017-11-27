#include <iostream>
using namespace std;

// #include <iostream.h>
// #include <conio.h>

int main(){
// void main(){
    int rows, coloumns;
    cout << "Enter rows coloumns ";
    cin >> rows >> coloumns;

    // const int x = rows;
    // const int y = coloumns;
    // cout << rows << endl;
    // int arr[rows][coloumns]; //WRONG!!! Must be known at compile time

    int arr[10][10];
    int r, c;
    //input
    for(r = 0; r < rows; r++){
        for(c = 0; c < coloumns; ++c){
            cin >> arr[r][c];
        }
    }

    //ouptut
     for(r = 0; r < rows; r++){
        for(c = 0; c < coloumns; ++c){
            cout <<  arr[r][c];
        }
        cout << endl;
    }
    // getch();
    return 0;
}