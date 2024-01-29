#include<iostream>
using namespace std;
class Node{
	public:
	int val;
	Node* next=NULL;
		Node(int val){
			this->val=val;
			this->next=NULL;
		}
		
};
class LinkedList{
	public:
	Node*head;
	Node*tail;
	int size;
	LinkedList(){
		head=tail=NULL;
		size=0;
		
	}

void insertAtEnd(int val){
	Node*temp=new Node(val);
	if(size==0)
	
		head=tail=temp;
	else{
		tail->next=temp;
		tail=temp;
	}
	size++;
}
void display(){
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void insertAtIdx(int idx,int val){
	if(idx<0||idx>size){
		cout<<"Invalid";
	}
	else if(idx==0) insertAtBeginning(val);
	else if(idx==size) insertAtEnd(val);
	else{
		Node*t=new Node(val);
		Node*temp=head;
		for(int i=1;i<idx;i++){
			temp=temp->next;
		}
		t->next=temp->next;
		temp->next=t;
		size++;
		
	}
}
int getElement(int idx){
	if(idx<0||idx>size){
		cout<<"Invalid";
		return -1;
	}
	else if(idx==0) return head->val;
	else if(idx==size-1) return tail->val;
	else{
		Node* temp=head;
		for(int i=1;i<=idx;i++){
			temp=temp->next;
		}
		return temp->val;
	}
}
void insertAtBeginning(int val){
	Node*temp=new Node(val);
	if(size ==0) head=tail=temp;
	else{
		temp->next=head;
		head=temp;
	}
	size++;
}
void delAtHead(){
	if (size==0){
		cout<<"List is empty";
	}
	else{
		head=head->next;
		size--;
	}
}
void delAtTail(){
	if(size==0){cout<<"List is Empty";
	}
	Node*temp=head;
	while(temp->next!=tail){
		temp=temp->next;
	}
	temp->next=NULL;
	tail=temp;
	size--;
}
void delAtIdx(int idx){
	if(idx<0||idx>size){
		cout<<"Invalid";
	}
	else if(idx==size-1){
		return delAtTail();
	}
	else if(size=0){
		return delAtHead();
	}
	else{
		Node*temp=head;
		for(int i=1;i<idx-1;i++){
			temp=temp->next;
		}
		temp->next=temp->next->next;
		size--;
	}
}
};
int main(){
	LinkedList ll;
	ll.insertAtEnd(10);
	ll.display();
	ll.insertAtEnd(20);
	ll.display();
	ll.insertAtEnd(30);
	ll.insertAtEnd(40);
	ll.display();
	ll.insertAtBeginning(23);
	ll.display();
	ll.insertAtIdx(2,41);
	ll.getElement(2);
	ll.delAtIdx(1);
	ll.display();
//cout<<	ll.getElement(1);
ll.delAtHead();
ll.delAtTail();
	ll.display();
}