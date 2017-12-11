// Deepak Aggarwal, Coding Blocks
// deepak@codingblocks.com
#include <iostream>
using namespace std;

struct Node{
	int data;
	Node * next;
};

Node* createLL(){
	Node * head = NULL;
	Node * tail = NULL;

	int x;
	while(true){
		cin >> x;
		if (x == -1) break;

		Node * tmp = new Node;
		(*tmp).data = x;
		tmp->next = NULL;

		if (head == NULL){
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

void printLL(Node * head){
	Node * curNode = head;

	while(curNode != NULL){
		cout << curNode->data << "-->";
		curNode = curNode->next;
	}

}


int main(){
	
	Node * head = createLL();
	printLL(head);

}