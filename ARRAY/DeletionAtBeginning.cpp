#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Deletion: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Deletion: ";
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}