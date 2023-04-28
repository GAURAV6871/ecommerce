#include<iostream>
using namespace std;



class stack
{
    int* arr;
    int t;          //represents the current index of the stack
    int n;          //represents the size of the stack

    public:

    stack(int n)
    {
        arr=new int[n];
        this->n=n;
        t=-1;
    }

    void push(int val)
    {
        if(t==n-1)     //overflow condition
        {
            return;
        }
        t++;
        arr[t]=val;
    }
    void pop()
    {
        if(t==-1)      //underflow condition
        {
            return;
        }
        t--;
    }
    int size()
    {
        return t+1;
    }
    bool empty()
    {
        return t=-1;
    }

    int top()
    {
        return arr[t];
    }
};


int main()
{
    stack s(5);
    cout<<"size: "<<s.size()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<"size: "<<s.size()<<endl;
    s.pop();
    cout<<"size: "<<s.size()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<"is empty: "<<s.empty()<<endl;
    cout<<"top element "<<s.top()<<endl;




return 0;
}