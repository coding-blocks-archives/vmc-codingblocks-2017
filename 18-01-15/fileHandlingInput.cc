// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int marks;
    int rollNo;
};
int main() {
    fstream fin;
    fin.open("studentOutput.dat", ios::in | ios::binary);

    Student s;
    while (fin.read((char*)&s, sizeof(s))) {
        cout << s.rollNo << s.marks << endl;
    }
    fin.close();
}