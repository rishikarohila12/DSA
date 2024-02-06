#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q)
{
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        

    }
}
void reverse(queue<int>&q)
{
    stack<int>st;
    int n=q.size();
    for(int i=0;i<n;i++)
    {
        int x=q.front();
        q.pop();
        st.push(x);

    }
    for(int i=0;i<n;i++)
    {
        int x=st.top();
        st.pop();
        q.push(x);
    }

}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
   display(q);
   cout<<endl;
    reverse(q);
    display(q);
    q.pop();
    cout<<endl;
    display(q);
    cout<<endl;
}
    
