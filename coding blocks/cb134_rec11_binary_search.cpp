#include<iostream>
using namespace std;

void binarysearch(int a[],int n,int s,int e,int target)
{
    int mid=s+(e-s)/2;
    if(s>e)
    {
        cout<<-1;
    }
    if(a[mid]==target)
    {
        cout<<mid<<endl;
        return;
    }
    else if(a[mid]>target)
    {
        binarysearch(a,n,s,mid-1,target);
    }
    else
    {
        binarysearch(a,n,mid+1,e,target);
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cin>>target;
    int s=0,e=n-1;
    binarysearch(a,n,s,e,target);

return 0;
}