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
		// cout << "inside ctor 1\n";
		color = 0;
		origin = 0;
		name = new char;
		*name = '\0';
	}

	Fruit(int c, int o, const char n[]){
		// cout << "inside ctor 2\n";
		color = c;
		origin = o;
		
		int len = strlen(n);
		name = new char[len + 1];
		strcpy(name, n);
	}

	void displayFruit() {
		// cout << "inside displayFruit\n";
		cout << "c o n " << 
			color << " " << 
			origin << " " <<
		 	name << endl;
		cout << endl;
	}

	~Fruit(){
		// cout << name << " Dtor invoked\n";
		delete name;
	}


	/*Fruit(Fruit &tmp){
		color = tmp.color;
		origin = tmp.origin;
		
		int len = strlen(tmp.name) + 1;
		name = new char[len];
		
		strcpy(name, tmp.name);
	}*/

	/*void setName(const char n[]){
		int len = strlen(n);	// apple, 5
		name = new char[len + 1];	//[0, 5]; size 6
		strcpy(name, n);
	}*/

	void updateName(const char n[]){
		strcpy(name, n);
	}
};


void foo(){
	Fruit f;
	cout << "foo\n";
	// f.cleanUp();
}

int main() {

	Fruit f1(10, 20, "pineapple");
	Fruit f2(f1);

	f1.updateName("apple");
	f1.displayFruit();
	f2.displayFruit();




	// foo();

	// Fruit f;

	/*Fruit f;
	f.displayFruit();

	// cout << "endter\n";

	Fruit f2(10, 20, "apple");
	f2.displayFruit();*/

}