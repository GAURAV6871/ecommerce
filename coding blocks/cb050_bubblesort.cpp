#include<iostream>
using namespace std;

int main()
{
    int n,i,j,count=0;
    cout<<"enter the size of array"<<endl;
    int a[100];
    cin>>n;
    cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j+1],a[j]);
            }

        }
    }
    cout<<endl<<"array after sorting is ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}