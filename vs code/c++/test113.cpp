#include<iostream>
using namespace std; 


int unique(int a[],int n)
{
     int xorsum=0,i;
     for(i=0;i<n;i++)
     {
         xorsum=xorsum^a[i];
     }
return xorsum;     
}

int main()
{
    int n,i;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elemnts of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<unique(a,n)<<endl;
return 0;    
}