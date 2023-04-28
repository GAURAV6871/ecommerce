#include<iostream>
using namespace std;

int main()
{
    int n1,n2,n3,i,j,k;
    cin>>n1>>n2>>n3;
    int m1[n1][n2],m2[n2][n3],a[n1][n3];
    cout<<"enter the elements of first matrix"<<endl;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"enter the elements of second matrix"<<endl;
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n3;j++)
        {
            cin>>m2[i][j];
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            for(k=0;k<n2;k++)
            {
                a[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}