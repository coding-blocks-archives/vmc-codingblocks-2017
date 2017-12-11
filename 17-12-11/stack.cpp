// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;
struct Node {
	int data;
	Node * next;
};

class Stack {
	Node * top;
public:
	Stack() {
		top = NULL;
	}

	void push(int x) {
		Node * tmp = new Node;
		tmp->data = x;
		tmp->next = NULL;

		if (top != NULL) {
			tmp->next = top;
			top = tmp;
		} else {
			top = tmp;
		}
	}

	int pop() {
		if (top == NULL) {
			return -1;
		}

		Node * tmp = top;
		top = top->next;
		int x = tmp->data;
		delete tmp;
		return x;
	}
};

int main() {
	Stack s;
	s.push(2);
	s.push(4);
	s.push(100);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	s.push(1000);
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

}