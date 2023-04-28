#include<iostream>
using namespace std;

int main()
{
    int n,i,m,pos[10];
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"/nthe entered array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the no to be searched "<<endl;
    cin>>m;
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            cout<<"the no in the array is present at the position "<<i+1<<endl;
        }
    }
    return 0;

}