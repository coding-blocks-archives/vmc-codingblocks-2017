// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    int marks;
    int rollNo;
};

// void write(char* varToWrite, int sizeToWrite);


int main() {
    // fstream fin;
    // fin.open("studentInput.txt", ios::in | ios::binary);

    fstream fout;
    fout.open("studentOutput.dat", ios::out | ios::binary);

    Student s;

    while(true){
        cin >> s.marks >> s.rollNo;

        if (cin){       // if (cin.eof() == false)
            fout.write((char*)&s, sizeof(s));
        }  else {
            break;
        } 

    }

    fout.close();

}