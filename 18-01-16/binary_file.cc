// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;

struct Student{
    int marks;
    int rollNo;
};

// write(char* ptr, int sze);

int main(){
    fstream fout("student.txt", ios::binary|ios::out);    // scope resolution operator  

    Student s;
    while(true){
        cin >> s.marks >> s.rollNo;

        if (cin){
            // fout << s.marks << s.rollNo; // charcter printing
            fout.write((char*)&s, sizeof(s));   // printing byets
        } else {
            break;
        }
    }
    fout.close();
}

