#include<iostream>
using namespace std;

int arraysearch(int a[100],int n,int target,int i)
{
    if(a[i]==target)
    {
        return i;
    }
    if(i==n)
    {
        return -1;
    }
    return arraysearch(a,n,target,i+1);
    
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
    int target,i=0;
    cout<<"enter the target"<<endl;
    cin>>target;
    cout<<arraysearch(a,n,target,i)<<endl;
return 0;
}