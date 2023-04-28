#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {   
        for(int j=n-i;j>=1;j--)
        {
            cout<<n-j;
        }
        cout<<endl;
    }     
return 0;
}