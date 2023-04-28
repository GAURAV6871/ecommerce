#include<iostream>
using namespace std;

int main()
{
    int a[10],n,i,swap,element;
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
    cout<<"enter the element no you want to be swaped"<<endl;
    cin>>element;
    for(i=0;i<n;i++)
    {
        if(i==element)   
        {
            swap=a[i];
            a[i]=a[n-1];
            a[n-1]=swap;
        }      
    }
    cout<<"the array after swapping is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;    
    
}