#include<iostream>
using namespace std;

int main()
{
    float n;
    int i,j,count=0;
    int a[100];
    cin>>n;
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
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
return 0;
}