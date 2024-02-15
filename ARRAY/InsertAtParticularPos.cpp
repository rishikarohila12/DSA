#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int data;
    int pos;
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter data"<<endl;
    cin>>data;
    cout<<"Enter position where you want to insert the data"<<endl;
    cin>>pos;
    if(pos<0||pos>n){
        cout<<"Invalid Position";
    }
    cout<<endl;
    cout<<"Before insertion:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Insertion : ";
    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=data;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


