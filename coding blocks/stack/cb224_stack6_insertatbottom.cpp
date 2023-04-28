#include<iostream>
#include<stack>
using namespace std;

void printlinkedlist(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void insertatbottom(stack<int>&s , int val)
{
    //base case
    if(s.empty())
    {
        s.push(val);
        return;
    }
  
    int x=s.top();
    s.pop();
    insertatbottom(s,val);
    s.push(x);
}

int main()
{
    stack<int> s;
    s.push(60);
    s.push(50);
    s.push(40);
    s.push(30);
    s.push(20);

    int val;
    cin>>val;
    insertatbottom(s,val);
    printlinkedlist(s);

 

return 0;
}