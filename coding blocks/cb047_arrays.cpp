#include<iostream>
using namespace std;

int main()
{
    int n,i,j,m,flag=0;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number you want location of"<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            cout<<i+1<<" ";
            flag=1;
        }
    }
    cout<<endl;
    if(flag==0)
    {
        cout<<-1<<endl;
    }
return 0;
}
