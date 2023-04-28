#include<iostream>
using namespace std;

int firstocc(int a[],int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return firstocc(a,n,i+1,key);
     
}

int lastocc(int a[],int n, int i, int key)
{
    if(i==0)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }
    return lastocc(a,n ,i-1,key);
     
}

int main()
{
    int n,i,j,key,b;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    cout<<"the first occurence is at "<<firstocc(a,n,0,key)<<endl;
    b=n-1;
    cout<<"the last occurence is at "<<lastocc(a,n,b,key)<<endl;
    return 0;
}