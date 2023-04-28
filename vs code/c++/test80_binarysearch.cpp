#include<iostream>
using namespace std;


int binary_search(int a[], int n,int key)
{ 
    int start=0,end=n-1,mid;
    mid=(start+end)/2;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==a[mid])
        {
            return mid;
        }
        else if(key>a[mid])
        {
            start=mid+1;
        }
        else 
        {
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n,key,i,pos;
    cout<<"enter the size of the array "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    pos=binary_search(a,n,key );
    cout<<pos+1<<endl;
}
