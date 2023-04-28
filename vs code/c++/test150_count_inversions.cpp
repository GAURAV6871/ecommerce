#include<iostream>
using namespace std;

int main()
{
    int n,i,j,inv=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the entered array is"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                inv++;
            }
        }
    }
    cout<<inv<<endl;
return 0;
}