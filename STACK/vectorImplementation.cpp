#include <iostream>
#include<vector>
using namespace std;
class Stack
{
public:
    vector<int>v;
    Stack(){
    }
    void push(int val)
    {
       v.push_back(val);
    }
    void pop()
    {
        if (v.size()==0)
            cout << "stack is empty";
            v.pop_back();
    }
    int top()
    {
        if (v.size()==0)
        {
            cout << "stack is empty";
            return -1;
        }
        return v[v.size()-1];
    }
    int size()
    {
        return v.size();
    }
    void display()
    {
        for (int i = 0; i <= v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.pop();
    st.display();
    cout << st.size() << endl;
    cout << st.top();
}
