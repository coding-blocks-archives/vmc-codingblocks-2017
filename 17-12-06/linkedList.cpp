#include <iostream>
using namespace std;

struct Node{
	int data;
	Node * next;
};


Node * createLL(){
	int x;
	Node * head = NULL;
	Node * tail = NULL;

	while(true){
		cin >> x;
		if (x == -1) break;
		
		Node * newNode = new Node;
		(*newNode).data = x;	//newNode->data
		(*newNode).next = NULL;	//newNode->next

		if (head == NULL){
			//this is the first node
			head = tail = newNode;
		}else{
			tail->next = newNode;
			tail = newNode;
		}
	}
	return head;
}

void display(Node* head){
	Node * tmp = head;
	while(tmp != NULL){
		cout << tmp->data << "-->";
		tmp = tmp->next;
	}
	cout << endl;
}

Node* insertAtEnd(Node * head, int x){
	Node * nodeToBeInserted = new Node;
	nodeToBeInserted->data = x;
	nodeToBeInserted->next = NULL;

	Node * tmp = head;

	while(tmp != NULL && tmp->next != NULL){
		tmp = tmp->next;
	}

	if (tmp == NULL) return nodeToBeInserted;

	tmp->next = nodeToBeInserted;
	return head;

}

int main(){

	Node * head_of_LL = createLL();
	display(head_of_LL);
	head_of_LL = insertAtEnd(head_of_LL, 500);
	display(head_of_LL);

}