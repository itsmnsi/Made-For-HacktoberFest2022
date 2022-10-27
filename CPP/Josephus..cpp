#include<iostream>
using namespace std;

// This program is to solve josephusproblem where
// N number of people stand in a circle 1st person
// kills 2nd and then hands over the dagger to 3rd
// and 3rd kills 4th and hands over the dagger to 5th
// we have to find the survivor given any value of N

struct node{
	int data;
	node* next;
};

void deleteNode(int val, node *head){
	node *temp = head;
	while(temp->next!=NULL){
		if(temp -> next -> data == val){
				temp->next = temp->next->next;
		}
		temp = temp -> next;
	}
}

void insert(int val, node* head){
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new node;
	temp->next->data = val;
	temp->next->next = NULL;
}

void kill(int length, node* head){
	node* temp = head;
	node* next = NULL;
	length-=1;
	while(length--){
		next = temp->next->next;
		delete temp->next;
		temp->next = next;
		temp = temp->next;
	}
	cout<<"The survivor will be person on position "<<temp->data<<"\n";
}


int main(){
	node *head = NULL;
	head = new node;
	head->next=NULL;
	head->data = 1;
	int n;
	cout<<"Enter the number of people : ";
	cin>>n;
	for(int i=2;i<=n;i++){
		insert(i, head);
	}

	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = head;
	kill(n, head);

	return 0;
}
