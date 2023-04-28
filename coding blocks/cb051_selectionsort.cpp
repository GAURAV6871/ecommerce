#include<iostream>
using namespace std;

int main()
{
    int n,i,j,min_idx=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min_idx])
            {
                min_idx=j;
            }
            swap(a[min_idx],a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
return 0;
}