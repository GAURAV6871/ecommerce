#include<iostream>
using namespace std;

int arraysearch(int a[100],int n,int target)
{
    if(a[n]==target)
    {
        return n;
    }
    if(n==0)
    {
        return -1;
    }
    return arraysearch(a,n-1,target);
    
}

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[100];
    cout<<"enter the values of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    cout<<arraysearch(a,n,target)<<endl;
return 0;
}