#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cout<<"enter the value of n,k"<<endl;
    cin>>n>>k;
    if(((n>>k)&1)==0)
    {
        cout<<k<<"th bit was not set"<<endl;
    }
    else
    {
        cout<<k<<"th bit was set"<<endl;
    }
return 0;
}