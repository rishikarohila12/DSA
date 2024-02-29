#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }};
    class ListNode{
        public:
        Node*head;
        Node*tail;
        int size;
        ListNode(){
            head=tail=NULL;
            size=0;
        }
  
    void insertAtHead(int val){
        Node*temp=new Node(val);
        if (size==0)head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
}
void insertAtTail(int val){
    Node*temp=new Node(val);
    if(size==0)head=tail=temp;
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
}
void reverseList(){
    Node*Next=NULL;
    Node*prev=NULL;
    Node*curr=head;
    while(curr){
        Next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    
    }
head=prev;
}
};
int main(){
    ListNode ll;
    ll.insertAtHead(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.reverseList();
    cout<<endl;
    ll.display();
    
}