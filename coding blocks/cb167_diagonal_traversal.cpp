#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    for(int i=0;i<=n+m-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int a=j;
            int b=i-j;
            if(i%2==0)
            {
                swap(a,b);
            }
            if(a>n-1  || b>m-1)
            {
                continue;
            }
            cout<<c[a][b]<<" ";
        }
    }
return 0;
}