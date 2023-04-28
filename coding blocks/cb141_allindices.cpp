#include<iostream>
using namespace std;
int count=0;
void findindices(int a[100],int n,int target,int i)
{
    if(a[i]==target)
    {
        ::count++;
    }

    if(i==n)
    {
        return;
    }
    findindices(a,n,target,i+1);
}


int main()
{
    int n;
    //cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[100];
    //cout<<"enter the values of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int target;
    //cout<<"enter the target"<<endl;
    cin>>target;
    int i=0;
    findindices(a,n,target,i);
    cout<<::count<<endl;
return 0;
}