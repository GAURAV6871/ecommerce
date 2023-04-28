#include<iostream>
using namespace std;

int main()
{
    int a[]={1,5,7};
    int b[]={2,3,6,8};
    int c[100];
    int m=sizeof(a)/sizeof(int);
    int n=sizeof(b)/sizeof(int);
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
        else
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    while(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<m)
    {
        c[k]=b[j];
        k++;
        i++;
    }
    for(i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
return 0;
}