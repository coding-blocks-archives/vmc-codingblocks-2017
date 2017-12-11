// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

class Fruit{
private:
	int color;
	int origin;
	char * name;	// array
public:
	int getColor(){
		return color;
	}

	int getOrigin(){
		return origin;
	}

	void setName(char n[]){
		// *name = n;
		int len = strlen(n);	// apple, 5
		name = new char[len + 1];	//[0, 5]; size 6

		for(int i = 0; i < len; ++i){	// [0, 4]
			name[i] = n[i];
		}
		name[len] = '\0';	// len 5

		// strcpy(name, n);

	}

	// void initialise(int c, int o){
	
	/*Fruit(int c, int o){
		origin = o;
		color = c;
	}

	Fruit(int o){
		origin = o;
		color = 0;
	}

	Fruit(){
		origin = 0;
		color = 0;
	}*/

	Fruit(int c, int o = 0, int x = 100){
		color = c;
		origin = o;
	}
};

int main(){
	// int fruitColor;
	// int fruitOrigin;
	// f.color;		//WRONG
	// f.initialise(10, 20);
	// cout << "color : "<< f.getColor() << endl;

	Fruit f(10, 20);	// ctor are automatically invoked


	// Fruit f(10,,100);

	cout << "color : "<< f.getColor() << endl;
	cout << "origin :" << f.getOrigin() << endl;
}