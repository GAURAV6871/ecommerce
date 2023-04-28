#include<iostream>
using namespace std;

int main()
{
    int n,i,temp,count=1;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"\n enter the values of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nthe array before sorting is displayed as"<<endl;    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    while(count<n)
    {
        for(i=0;i<n-count;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        count++;
    }
    cout<<"\nthe array after sorting is displayed as"<<endl;    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}    
    