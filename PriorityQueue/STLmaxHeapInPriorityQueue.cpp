#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        pq.push(arr[i]);
    }
    cout<<"Priority Queue: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }

}