#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> p;
    int n;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.push(a[i]);
    }
    for(int i=0;i<=n/2;i++)
    {
        int x=0;
        //cout<<s.top()<<" ";
        x=s.top();
        p.push(x);
        s.pop();
    }
    //cout<<endl;
    p.pop();
    int size=p.size();
    for(int i=1;i<=size;i++)
    {
        int x=p.top();
        p.pop();
        s.push(x);
    }
    for(int i=0;i<=(n/2)+1;i++)
    {
        //int x=0;
        cout<<s.top()<<" ";
       // x=s.top();
        //p.push(x);
        s.pop();
    }
    cout<<endl;
return 0;
}