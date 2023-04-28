#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],i,num,pos;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<endl<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"the entered array is "<<endl;
    for(i=0;i<n;i++)  
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"enter the no to be inserted"<<endl;
    cin>>num;
    cout<<"enter the position at which no is to be inserted"<<endl;
    cin>>pos;
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    n=n+1;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}
