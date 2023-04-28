#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(6);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    cout<<s.size()<<endl;
    s.erase(2);
    cout<<s.size()<<endl;
    for(auto it=s.begin(), end=s.end();it!=end;it++)
    {
        cout<<*it<<" ";        
    }
    cout<<endl;
    for(int  x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    if(s.find(4)!=s.end())
    {
        cout<<"4 is present"<<endl;
    }
    else
    {
        cout<<"4 is not present"<<endl;

    }
    if(s.count(7))   // altough count function counts the no of elements but since duplicacy is not allowed count will always be equal to 1
    {
        cout<<"6 is present"<<endl;
    }
    s.clear();

    for(int  x:s)
    {
        cout<<x<<" ";
    }
    if(s.empty())
    {
        cout<<1;
    }
    cout<<endl;
return 0;
}