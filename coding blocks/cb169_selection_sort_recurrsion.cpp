#include<iostream>
using namespace std;

void display(int a[100], int n)
{
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
}

void selectionsort(int a[100], int n,int i)
{
    //base case
    if(i==n-2)
    {
        display(a,n);
        return;
    }

    int min_idx=i;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]<a[min_idx])
        {
            min_idx=j;
        }  
    }
    swap(a[i],a[min_idx]);
    selectionsort(a,n,i+1);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selectionsort(a,n,0);
return 0;
}