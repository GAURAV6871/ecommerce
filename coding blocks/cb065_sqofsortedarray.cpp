//insertion sort


#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    //cout<<"enter the size of array"<<endl;
    int a[100];
    cin>>n;
    //cout<<"enter the values of arrays"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
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
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;    
return 0;
}