#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the values of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
         for(int j=0;j<n;j++)
         {
             if(a[j]>a[j+1])
             {
                 swap(a[j],a[j+1]);
             }
         }
    }
    int target;
    cout<<"enter the target"<<endl;
    cin>>target;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum=0;
            sum=a[i]+a[j];
            if(sum==target)
            {
                count++;
                cout<<a[i]<<" and "<<a[j]<<endl;
            }
        }
    }
    cout<<"no of iterations are "<<count<<endl;
    cout<<endl;
return 0;
}