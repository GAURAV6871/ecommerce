#include<iostream>
using namespace std;

void counttarget(int a[100],int n,int target,int count)
{
    if(a[n]==target)
    {
        count++;
    }
    if(n==0)
    {
        if(a[0]==target)
        {
            count++;
            cout<<count<<endl;
            return;
        }
        if(count==0)
        {
            cout<<"-1";
            return;
        }
    }
    counttarget(a,n,target,count);
}


int main()
{
    cout<<"enter the size: ";
    int n;
    cin>>n;
    cout<<endl<<"enter the values: ";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    int target;
    cout<<"enter the target: ";
    cin>>target;
    int count=0;
    counttarget(a,n,target,count);
    return 0;
}