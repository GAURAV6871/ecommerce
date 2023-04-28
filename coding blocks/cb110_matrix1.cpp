#include<iostream>
using namespace std;

int main()
{
    int a[10][10],m=3,n=4;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i][j];
        }
    }
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}