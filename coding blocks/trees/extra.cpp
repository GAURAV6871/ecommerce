#include<iostream>
using namespace std;

int count=0;
void  search(int arr[100],int n,int x,int i)
{
    //base case
    if(i==n)
    {
        return;
    }
    //recursive case
    if(arr[i]==x)
    {
        ::count++; 
    }
    return search(arr,n,x,i+1);
}

int main()
{
    int arr[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    
    search(arr,n,x,0);

    if (::count==0)
    {
        cout<<"-1";
    }
    else
    cout<<::count;
    return 0;
}