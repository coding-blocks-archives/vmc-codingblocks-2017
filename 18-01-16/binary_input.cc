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
    ifstream fin("student.txt", ios::binary);
    while(true){
        fin.read((char*)&s,sizeof(s));   // reading bytes
        if (!fin) break;

        cout << s.marks << " " << s.rollNo << endl;
    }
    fin.close();

}