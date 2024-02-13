#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[]={7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    priority_queue<int,vector<int>,greater<int>>pq(arr,arr+n);
    cout<<"priority Queue(Min Heap ): ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

}