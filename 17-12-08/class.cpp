// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

class Fruit {
private:
	int color;
	int origin;
public:
	int getcolor() {
		return color;
	}

	int getorigin() {
		return origin;
	}

	// void initalise(int c, int o) {

	// Function Overloading
	// constructor
	Fruit(int c, int o){
		color = c;
		origin = o;
	}

	// Default Arguments
	Fruit(int c = 0, int o = 0){
		color = c;
		origin = o;
	}

	/*// constructor 2
	Fruit (int o){
		origin = o;
		color = 0;
	}

	// constructor 3
	Fruit(){
		origin = 0;
		color = 0;
	}*/


	
};



int main() {
	Fruit F1(100, 10);

	cout << F1.getcolor() << endl;
	cout << F1.getorigin() << endl;

	// Fruit F3(, 10);

	// Fruit F2;
	// F2.initalise(100, 88);
	// cout << F2.getorigin() << endl;
	// cout << F2.getcolor()  << endl;


}