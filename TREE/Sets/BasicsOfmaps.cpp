#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["raghav"]=20;
    m["rishika"]=30;
    m["ankit"]=10;
    for(auto x:m){
        cout<<x.first<<" ";
        cout<<x.second<<" ";
    }
}