#include<iostream>
using namespace std;

int main()
{
    int n,i,x,pos;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the no you want to delete"<<endl;
    cin>>x;
    for(i=1;i<=n;i++)
    {
        if(x==a[i])
        {
            pos=i;
        }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    cout<<endl;
    for(i=1;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}