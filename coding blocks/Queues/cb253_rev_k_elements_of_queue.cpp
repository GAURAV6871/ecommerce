#include<iostream>
#include<queue>
#include<stack>
using namespace std;



void kreverse(int k,int i,queue<int>& q,int n)
{
    stack<int> s;
    stack<int> s1;
    while(i<k)
    {
        s.push(q.front());
        //cout<<s.top()<<" ";
        q.pop();
        i++;
    }
    while(i<n)
    {
        s1.push(q.front());
        //cout<<s.top()<<" ";
        q.pop();
        i++;
    }

    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(!s1.empty())
    {
        s.push(s1.top());
        s1.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
}



void queuetraverse(queue<int>& q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        queue<int> q;
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            q.push(a[i]);
        }
        kreverse(k,0,q,n);
        queuetraverse(q);
        t--;
    }     
    return 0; 
}