// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char arr[100];
    ifstream fin("cat.txt");
    ofstream fout("dog.txt");

    while(fin.eof() == false){
        fin.getline(arr, 100, '\n');
        fout << arr;
    }   

}