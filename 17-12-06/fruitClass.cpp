#include <iostream>
#include <string.h>
using namespace std;

class Fruit{
	int color;
	int origin;
	char * name;
public:
	Fruit(int src = 0){
		origin = src;
		color = 0;
	}

	Fruit(int src, int c, const char n[]){
		origin = src;
		color = c;
		int len = strlen(n);
		name = new char [len + 1];	//name is a ptr-to-char
		strcpy(name, n);		//name = n
	}

	Fruit(Fruit& temp){
		origin = temp.origin;
		color = temp.color;
		int len = strlen(temp.name);
		name = new char [len + 1];
		strcpy(name, temp.name);

	}

	int getColor(){
		return color;
	}
	int getOrigin(){
		return origin;
	}

	void display(){
		cout << name << " " << origin << " " << color << endl;
	}

	void updateName(const char n[]){
		delete [] name;
		int newLen = strlen(n);
		name = new char[newLen + 1];
		strcpy(name, n);
	}

	~Fruit(){
		delete [] name;
	}

};

void fun1(){
	Fruit F;
	// F.clean();
}


int main(){
	Fruit f1(20, 10, "apple");

	Fruit f2(f1);

	f1.updateName("mango");
	f1.display();
	f2.display();
}