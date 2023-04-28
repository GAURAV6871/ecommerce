#include<iostream>
using namespace std;


void waveorder(int a[][100], int m, int n)
{
    for(int j=0;j<n;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
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
    waveorder(a,m,n);
return 0;
}