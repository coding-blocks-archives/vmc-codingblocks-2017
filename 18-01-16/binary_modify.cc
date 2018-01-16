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
    fstream fin("student.txt", ios::binary|ios::in|ios::out);

    while(true){
        fin.read((char*)&s,sizeof(s));   // reading bytes
        if (!fin) break;

        // successful reading
        if (s.rollNo == 20){
            s.marks = 250;
            // int posOfGetPtr = fin.tellg();
            // fin.seekp(-1*sizeof(s) + posOfGetPtr);  // shifts the pos prior to the student read
            fin.seekp(-1 * sizeof(s), ios::cur);
            fin.write((char*)&s, sizeof(s));
        }

        // cout << s.marks << " " << s.rollNo << endl;
    }
    fin.close();

}