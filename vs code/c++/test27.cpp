#include<iostream>
using namespace std;

//find all the non repeating elements of the array

int main()
{
    int a[10], i,n,comp;
    cout<<"enter the limit of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        comp=a[i];
        if(comp!=a[i+1])
        {
            cout<<a[i];
        }
    }
return 0;    
}