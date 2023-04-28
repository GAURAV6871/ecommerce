#include<iostream>
using namespace std;

void linearsearch(int a[], int key, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"found at "<<i<<endl;
            return;
        }
    }
    if(i==n)
    {
        cout<<"not found"<<endl;
    }
}


void binarysearch(int a[], int key, int s, int end)
{
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(key==mid)
        {
            cout<<"found"<<endl;
            return;
        }
        else if(key<mid)
        {
            end=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    cout<<"element not found"<<endl;
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
    int key;
    cin>>key;
    //linearsearch(a,key,n);
    binarysearch(a,key,0,n-1);
return 0;
}