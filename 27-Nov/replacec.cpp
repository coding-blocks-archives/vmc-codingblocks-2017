#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

void puretext() {
    fstream fin;
    fin.open("mynotes.txt", ios::in);

    fstream fout;
    fout.open("mynotes2.txt", ios::out);

    char c;

    while (fin.get(c)) {
        if (c == 'K'){
            c = 'C';
        }
        // fout << c;
        cout << c;
    }
    fin.close();
    fout.close();
    remove("mynotes.txt");
    rename("mynotes2.txt", "fucj.txt");
}

int main() {
    puretext();
}