                    //CODE INCOMPLETE


#include<iostream>
using namespace std;

class stack
{
    vector<int> v;
    
    public:
    
    void push(int val)
    {
        v.push_back(val)
    }
    void pop()
    {
        if(v.empty())        //underflow condition
        {
            return;
        }    
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    bool empty()
    {
        return v.empty();
    }
    int size()
    {
        return v.size();
    }
};


int main()
{
    stack s(5);
    cout<<"size: "<<s.size()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();

    cout<<"size: "<<s.size()<<endl;
    cout<<"top element"<<s.top()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;
    s.pop();
    cout<<"size: "<<s.size()<<endl;
    cout<<"top element"<<s.top()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;
    s.pop();
    cout<<"size: "<<s.size()<<endl;
    cout<<"top element"<<s.top()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;
    s.pop();
    cout<<"size: "<<s.size()<<endl;
    cout<<"top element"<<s.top()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;
    s.pop();
    cout<<"size: "<<s.size()<<endl;
    cout<<"top element"<<s.top()<<endl;
    cout<<"is empty: "<<s.empty()<<endl;


return 0;
}