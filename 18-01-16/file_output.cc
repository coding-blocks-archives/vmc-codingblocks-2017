// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream writer("dog.txt");
    char arr[100];

    while(cin.getline(arr, 100)){
        writer << arr;
    }

    writer.close();
}