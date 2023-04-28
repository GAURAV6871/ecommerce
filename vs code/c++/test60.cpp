#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"the entered array is "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"the array removing the repeating elements "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                break;
            }
        }
        if(j==n)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
    
}