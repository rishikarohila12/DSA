#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int checkEqual(vector<string>&v)
{
    unordered_map<char,int>mp;
    for(auto str:v){
        for(auto c:str){
            mp[c]++;
        }
    }
     int n=v.size();
    for(auto ele:mp){
        if(ele.second%n!=0){
            return false;
        }
        
    }
    return true;


}

int main()
{
    int n;
    cout<<"Enter number of strings: ";
    cin>>n;
    vector<string>v(n);
    cout<<"Enter Strings: ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
     cout<<(checkEqual(v)?"Yes":"No");
}


