#include<iostream>
#include<vector>
using namespace std;


int main()
{
    
    int n; cin>> n;
    int m; cin>>m;
    int a[n][m];
    int t[m][n];
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            t[i][j]=a[j][i];
        }
    }   
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}