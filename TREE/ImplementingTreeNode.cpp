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
int sum(Node*root){
    if(root==NULL){
        return 0;
    }
    return root->val+sum(root->left)+sum(root->right);
}
void display(Node*root)
    {
        if(root==NULL)return;
        cout<<root->val<<" ";
        display(root->left);
        display(root->right);
    }
    int size(Node*root){
        // int count=0;
        if(root==NULL) return 0;
        return 1+size(root->left)+size(root->right);

    }
    int maxInTree(Node*root){
        if(root==NULL)return INT_MIN;
        int lMax=maxInTree(root->left);
        int rMax=maxInTree(root->right);
        return max(root->val,max(lMax,rMax));

    }
    int levels(Node*root){
        if(root==NULL)return 0;
        return 1+max(levels(root->left),levels(root->right));
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
    display(a);cout<<endl;
    cout<<"Sum : "<<sum(a)<<endl;
    cout<<"Size: "<<size(a)<<endl;
    cout<<"Maximum Node value is: "<<maxInTree(a)<<endl;
    cout<<"Levels in a Tree: "<<levels(a);
}
