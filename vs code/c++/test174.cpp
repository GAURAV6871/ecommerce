#include<iostream>
using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"the array after sorting is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" "; 
    }
    cout<<endl;
return 0;
}