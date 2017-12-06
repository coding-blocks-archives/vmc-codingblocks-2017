#include <fstream>
#include <iostream>
using namespace std;

void PURETEXT(){
	ifstream fin;
	fin.open("mynotes.txt");

	char x;

	x = fin.get();

	while( x != EOF){
		if (x == 'K'){
			cout << 'C';
		}
		else{
			cout << x;
		}
		x = fin.get();
	}
}

int main(){
	PURETEXT();
}
