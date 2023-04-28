#include<iostream>
using namespace std;

void Merging(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=arr[l+1];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=arr[mid +1+i];
    }
    
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2 )
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            i++;
            k++;
        }
        else
        {
            arr[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<n1)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=a[i];
        i++;
        k++;
    }
}


void mergesort(int arr[],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);

        Merging(arr,l,mid,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    return 0;
}