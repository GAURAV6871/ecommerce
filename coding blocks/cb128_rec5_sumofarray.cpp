#include<iostream>
using namespace std;

int array_sum(int a[10],int n)
{
    if(n==1)
    {
        return a[1];
    }

    return a[n]+array_sum(a,n-1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<array_sum(a,n)<<endl;
return 0;
}