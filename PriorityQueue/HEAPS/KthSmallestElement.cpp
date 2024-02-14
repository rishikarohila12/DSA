#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int  i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    for(int i=1;i<k;i++)
    {
        pq.pop();
    }
    cout<<pq.top();



}