// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
#include <string.h>
using namespace std;

class Fruit{
	int origin;
	char * name;
public:
	Fruit(const char n[]){
		origin = 0;

		int len = strlen(n);
		name = new char[len + 1];
		strcpy(name, n);
	}

	Fruit(Fruit& tmp){
		origin = tmp.origin;	// within context....fruit to apna hi hai
		
		int f2Length = strlen(tmp.name);
		name = new char[f2Length + 1];
		strcpy(name, tmp.name);

	}

	void displayFruit(){
		cout << origin << " " << name << endl;
	}

	void updateName(const char n[]){
		delete [] name;
		int len = strlen(n);
		name = new char[len + 1];
		strcpy(name, n);

	}

	// destructor
	~Fruit(){
		delete [] name;
	}
};

void func1(){
	Fruit f("mango");
	f.displayFruit();
	// f.cleanup();
}

int main(){

	// func1();
	// Fruit F("apple");
	// F.displayFruit();


	Fruit f1("pineapple");

	Fruit f2(f1);
	f2.updateName("mango");


	f1.displayFruit();
	f2.displayFruit();
		
}