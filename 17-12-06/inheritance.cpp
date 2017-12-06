#include <iostream>
using namespace std;

class Fruit{
private:
	int seed;
protected:
	int color;
	int origin;
public:
	int getColor(){
		return color;
	}
}; 

class Mango:public Fruit{
private:
	int price;
protected:
	int variety;
public:
	int getVariety(){
		return variety;
	}
};


int main(){
	Fruit F;

	Mango M;
	M.getVariety();
	M.getColor();

}