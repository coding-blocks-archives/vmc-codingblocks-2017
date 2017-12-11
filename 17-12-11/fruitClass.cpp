// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <string.h>
using namespace std;


class Fruit {
	int color;
	int origin;
	char * name;
public:

	Fruit(){
		color = 0;
		origin = 0;
		name = NULL;
	}

	Fruit(int c, int o, const char n[]){
		color = c;
		origin = o;
		int len = strlen(n);
		name = new char[len + 1];
		strcpy(name, n);
	}

	void displayFruit() {
		cout << "c o n " << 
			color << " " << 
			origin << " " <<
		 	name << endl;
		cout << endl;
	}
};


int main() {
	Fruit f;
	f.displayFruit();


	Fruit f2(10, 20, "apple");
	f2.displayFruit();

}