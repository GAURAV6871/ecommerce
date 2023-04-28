#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int a[n],j;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int j=0;
        while(j<=i)
        {
            sum+=a[j];
            j++;
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
return 0;
}