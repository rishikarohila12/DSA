#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    Node*left;
    Node*right;
    int val;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void display(Node*root)
    {
        if(root==NULL)return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
    int main(){

    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(-40);
    Node* e=new Node(-50);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    display(a);cout<<endl;}