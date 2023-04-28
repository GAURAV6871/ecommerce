#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int n,i,j,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"entered array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<=n/2;i++)
    {
        swap(a[i],a[n-1-i]);
        /*temp=a[n-1-i];
        a[n-i-1]=a[i];
        a[i]=temp;*/
    }
    cout<<"array after reversal is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;
return 0;
}