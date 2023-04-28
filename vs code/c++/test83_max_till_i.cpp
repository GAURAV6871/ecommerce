#include<iostream>
using namespace std;

int main()
{
    int i,mx=-199999999,n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nthe entered array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
return 0;
}