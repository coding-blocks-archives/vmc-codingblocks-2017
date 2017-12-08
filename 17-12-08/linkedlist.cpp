// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

struct Node {
	// by default, public
	int data;
	Node * next;
};


Node* createList() {
	int x;
	Node * head = NULL;
	Node * tail = NULL;

	while (true) {
		cin >> x;
		if (x == -1) break;

		Node * tmp = new Node;
		tmp->data = x;
		tmp->next = NULL;

		if (head == NULL) {
			// list is empty
			head = tmp;
			tail = tmp;
		}
		else {
			tail->next = tmp;
			tail = tmp;
		}
	}

	return head;
}

void display(Node * head) {
	Node * curNode = head;

	while (curNode != NULL) {
		cout << curNode->data << "-->";
		curNode = curNode->next;
	}
	cout << endl;
}


Node * addToLast(Node* head, int x) {
	Node * tmp = head;
	if (tmp == NULL) {
		Node * nodeToBeAdded = new Node;
		nodeToBeAdded->data = x;
		nodeToBeAdded->next = NULL;
		return nodeToBeAdded;
	}


	while (tmp->next != NULL) {
		tmp = tmp->next;
	}

	Node * nodeToBeAdded = new Node;
	nodeToBeAdded->data = x;
	nodeToBeAdded->next = NULL;

	tmp->next = nodeToBeAdded;
}



int main() {

	Node * head = createList();
	display(head);

	head = addToLast(head, 5000);
	display(head);

}