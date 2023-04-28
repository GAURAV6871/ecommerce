#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans;
    for(int i=0;i<n;i++)
    {
        if(a[0]<a[n-1-i])
        {
            ans=a[n-i];
            break;
        }
    }
    cout<<ans;
return 0;
}