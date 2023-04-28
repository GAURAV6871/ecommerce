//BINARY SEARCH

#include<iostream>
using namespace std;

int main()
{
    int n,i,j,pos;
    cout<<"enter the size of array"<<endl;
    int a[100];
    cin>>n;
    cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"enter the target: ";
    cin>>target;
    cout<<endl;
    int mid;
    int f=0,l=n-1;
    while(f<=l)
    {
        mid=(f+l)/2;
        if(a[mid]==target)
        {
            pos=mid;
            break;
        }
        else if(target<a[mid])
        {
            l=mid-1;
        }
        else if(target>a[mid] )
        {
            f=mid+1;
        }
    }  
    if(f>l)
    {
        cout<<"element not found"<<endl;
    }  
    else
    {
        cout<<"element found at: "<<pos<<endl;
    }
return 0;
}