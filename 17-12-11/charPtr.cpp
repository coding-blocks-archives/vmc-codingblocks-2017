// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;


inline void foo(){
	while(1==1){
		;
	}
}

int main(){
	int a = 20;
	char z = 'a';


	int * x  = &a;
	char * y = &z;

	cout << x << endl;
	cout << y << endl;	
}