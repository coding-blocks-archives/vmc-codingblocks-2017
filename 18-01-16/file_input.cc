// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    int a;

    ifstream fin("cat.txt");

    fin >> a;
    cout << a;
    fin >> a; 
    cout << a;   
}