#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*head;
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
    void sumOfIntegers(Node*head){
        int sum_pos=0;
        int sum_neg=0;
        Node*temp=head;
        while(temp){
            if(temp->val>0){
                sum_pos=sum_pos+temp->val;
                temp=temp->next;
            }
            else{
                sum_neg=sum_neg+temp->val;
                temp=temp->next;
            }
        }
        cout<<sum_pos<<endl;
        cout<<sum_neg<<endl;


    }
    void insert(Node*head,int val){
        Node*newnode=new Node(val);
        if(head==NULL){
            head=newnode;

        }
        else{
            Node*temp=head;
            while(temp->next){
                cout<<temp->val<<" ";
                temp=temp->next;

            }
            temp->next=newnode;

        }

    }
    void display(Node*head){
        Node*temp=head;
        while(temp){
            cout<<temp->val;
            temp=temp->next;
        }
    }};
    int main()
    {
        ListNode ll;
        ll.insert(&head,10);
        ll.insert(head,-1);
        ll.insert(head,-3);
        ll.insert(head,-5);
        ll.insert(head,6);
        ll.display(head);
        ll.sumOfIntegers(head);
        ll.display(head);

    }

