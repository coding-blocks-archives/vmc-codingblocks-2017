#include <iostream>
using namespace std;

struct Node {
	Node * next;
	int data;
	Node(int d) {
		data = d;
		next = NULL;
	}
};

class Stack {
private:
	Node * top;
public:
	Stack() {
		top = NULL;
	}

	void push(int x) {
		Node * newNode = new Node(x);
		if (top == NULL) {
			top = newNode;
		} else{
			newNode->next = top;
			top = newNode;
		}
	}

	int pop(){
		if (top == NULL) return -1;

		int x = top->data;
		Node * tmp = top->next;
		delete top;
		top = tmp;
		return x;

	}

	~Stack(){
		while(top){
			Node * tmp = top;
			top = top->next;
			delete tmp;
		}
	}
};


int main() {
	Stack s;
	s.push(2);
	s.push(3);
	cout << s.pop();
	cout << s.pop();
	cout << s.pop();

}