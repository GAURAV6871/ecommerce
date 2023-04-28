#include<iostream>
using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"enter the size of the matrix"<<endl;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl<<"the entered matrix is "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
        }
    }
    cout<<"the transpose of the matrix is "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}