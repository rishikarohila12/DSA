#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before insertion:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    arr[n]=data;
    n++;
    cout<<"After Insertion: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
