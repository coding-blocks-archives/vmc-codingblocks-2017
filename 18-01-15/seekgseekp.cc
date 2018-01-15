// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    int marks;
    int rollNo;
};

int main(){
    Student s;
    fstream fin("studentOutput.dat", ios::in|ios::binary|ios::out);  
    // fstream fout("studentOutput2.dat", ios::out|ios::binary);  
    // while(f){
        // int x = fin.tellg();
        
        fin.read((char*)&s, sizeof(s));
        s.rollNo = 200;
        
        fin.seekg(-1);

        fin.write((char*)&s, sizeof(s));
    // }
        fin.close();
       
}