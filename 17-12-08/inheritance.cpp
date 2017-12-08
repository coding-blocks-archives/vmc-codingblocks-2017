// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

class Fruit {
private:
	int color;
	int origin;
protected:
	Fruit() {
		cout << "Ctor of Fruit called\n";
		origin = 0;
		color = 0;
	}

private:
	int getcolor() {
		return color;
	}

	int getorigin() {
		return origin;
	}
};


class Mango: privae Fruit{
	int varitey;
}
public:
	Mango() {
		cout << "Ctor of mango called\n";
		varitey = 100;
	}

	int getVaritey() {
		return varitey;
	}

	int getcolor() {
		return Fruit::getcolor();
	}

};

int main() {
	Mango M;


	cout << M.getVaritey() << endl;
	cout << M.getcolor() << endl;

}