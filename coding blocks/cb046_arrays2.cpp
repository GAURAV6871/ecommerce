#include<iostream>
using namespace std;

int main()
{
    int n,i,j,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number you want location of"<<endl;
    cin>>m;
    int loc;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==m)
        {
            loc=m;
            break;
        }
    }
    if(i==-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<m<<endl;
    }
return 0;
}