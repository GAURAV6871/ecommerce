#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=+a[j];
            cout<<a[j]<<endl;
        }
    }
}