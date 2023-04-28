#include<iostream>
using namespace std;

//write a c++ programme to arrange an array in ascending order
int main()
{
    int a[10],i,n,big;
    cout<<"enter the limit of the array"<<endl;
    cin>>n;
    cout<<"enter the values of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            big=a[i];
            a[i]=a[i+1];
            a[i+1]=big;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}    