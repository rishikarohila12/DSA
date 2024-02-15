#include<set>
#include<iostream>
using namespace std;
int main(){
set<int>s;
s.insert(10);
s.insert(9);
s.insert(8);
s.insert(7);
s.insert(6);
s.insert(5);
for(auto ele:s){
    cout<<ele<<" ";
}
}