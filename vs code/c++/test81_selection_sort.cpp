#include<iostream>
using namespace std;


int main()
{
    int n,i,j,temp;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"\n the array after sorting is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nthe array after sorting is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}    