// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // input from a file and print it on screen per line

    // till I can read, I will read and print it on the monitor
    ifstream fin;
    fin.open("cat.txt");
    char arr[100];

    while(true){
        // first read and then check
        fin.getline(arr, 100, '\n');
        if (fin.eof()) break;
        cout << "X" << arr << "X" << endl;

        
    }
    fin.close();

}