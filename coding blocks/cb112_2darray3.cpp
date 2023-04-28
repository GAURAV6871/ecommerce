#include<iostream>
using namespace std;

void transpose(int a[][100], int m, int n)
{
    int b[n][m];
    cout<<"original matrix"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
        cout<<endl;
    }
    cout<<"transpose of the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n,m;
    cout<<"enter the no of rows and columns"<<endl;
    cin>>n>>m;
    int a[100][100];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    transpose(a,m,n);
return 0;
}