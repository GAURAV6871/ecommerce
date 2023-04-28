#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n],csum[10];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    csum[0]=0;
    for(int i=1;i<=n;i++)
    {
        csum[i]=csum[i-1]+a[i-1];
    }
    for(int i=0;i<=n;i++)
    {
        cout<<csum[i]<<" ";
    }
    cout<<endl;
return 0;
}