#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Maxheap{
    vector<int>hp;
    void upheapify(int ci){
       while(ci>0){
        int pi=(ci-1)/2;
        if(hp[pi]<hp[ci]){
            swap(hp[pi],hp[ci]);
            ci=pi;
        }
        else break;

       }

    }
    void downheapify(int idx){
        int lc=2*idx+1;
        int rc=2*idx+2;
        while(lc>=hp.size()) break;
        int maxEl=idx;
        if(hp[lc]>hp[maxEl])
        maxEl=lc;
        if(hp[rc]>hp[maxEl])
        maxEl=rc;
        if(maxEl!=idx){
            swap(hp[idx],hp[maxEl]);
            idx=maxEl;
        }
}
    
    public:
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    int peek(){
        if(empty())return INT_MIN;
        return hp[0];
    }
    void pop(){
    if(empty())return;
swap(hp[0],hp[hp.size()-1]);
hp.pop_back();
if(!empty()){
    downheapify(0);
}
}
    int empty(){
        return hp.size()==0;
    }
    void display(){
        for(int i=0;i<hp.size();i++){
            cout<<hp[i]<<" ";
        }
    }
};
int main(){
    Maxheap hp;
    hp.push(10);
    hp.push(20);
    hp.push(30);
    hp.push(40);
    hp.push(50);
    hp.push(60);
    cout<<"Priority Queue: ";
    hp.display();
    cout<<endl;
    cout<<"After deleting Node with highest priority:";
    hp.pop();
    hp.display();
}