#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={ 6,5,3,28,10,9};
    vector<int>ans;
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
