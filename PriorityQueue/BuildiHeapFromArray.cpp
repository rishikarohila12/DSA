#include<iostream>
using namespace std;
void heapify(int arr[],int n,int idx)
{int maxEl=idx;
    int lc=2*idx+1;
    int rc=2*idx+2;
    
    if(lc<n&& arr[lc]>arr[maxEl])
    maxEl=lc;
    if(rc<n&&arr[rc]>arr[maxEl])
    maxEl=rc;
    if(idx!=maxEl){
        swap(arr[maxEl],arr[idx]);
        heapify(arr,n,maxEl);
    }
}
void buildHeap(int arr[],int n){
    //non leaf idx
    int startidx=(n-1)/2;
    for(int i=startidx;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
void printHeap(int arr[],int n){
    cout<<"Array Implementation Of Heap is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int n=sizeof(arr)/sizeof(arr[0]);
    buildHeap(arr,n);
    printHeap(arr,n);
}