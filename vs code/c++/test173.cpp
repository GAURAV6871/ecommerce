#include<iostream>
using namespace std;

int main()
{
    int n,i,temp,j;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(i=1;i<=n-1;i++)
    {
        temp=0;
        for(j=i+1;j<=n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}