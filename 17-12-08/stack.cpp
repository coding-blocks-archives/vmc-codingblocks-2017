// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

struct Node {
	int data;
	Node * next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


class Stack {
	Node * top;
public:
	Stack();
	~Stack();
	void push(int x);
	int pop();
};

Stack::Stack() {
	top = NULL;
}

Stack::~Stack() {

}

void Stack::push(int x) {
	Node * tmp = new Node(x);

	if (top == NULL) {
		// this is the first node
		top = tmp;
	}
	else {
		// stack is not empty
		tmp->next = top;
		top = tmp;
	}

}

int Stack::pop() {
	if (top == NULL) {
		return -1;
	}

	Node * tmp = top;
	int x = tmp->data;
	top = top->next;
	delete tmp;
	return x;
}

int main() {

	Stack s;
	s.push(2);
	s.push(3);
	s.push(100);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.push(5000);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

}