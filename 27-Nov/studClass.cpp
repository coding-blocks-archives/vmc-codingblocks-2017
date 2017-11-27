// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com

#include <iostream>
using namespace std;

class Student{
    int rollNo;
    int cs;
public:
    void setRollNo(int x){
        if (x > 0) rollNo = x;
        else x = 10;
    }
};

int main() {
    Student s;
    // s.setRollNo(2);
    s.rollNo;  
}