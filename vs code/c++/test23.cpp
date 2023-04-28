#include<iostream>
using namespace std;

//write a c++ programme to find largest element of a given array
int main()
{
    int a[10],i,n;
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
    cout<<endl;
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }   
    }
    cout<<"the largest value of the array is "<<a[0]<<endl;
    return 0;
}