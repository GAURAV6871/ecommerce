#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"enter the no of rows"<<endl;
    cin>>n;
    cout<<"enter the no of columns"<<endl;
    cin>>m;
    int i,j,a[n][m],small;
    cout<<"enter the elements of the matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the entered matrix is"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }    
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            small=a[i][j];
            if(a[i+1][j]<a[i][j])
            {
                small=a[i+1][j];
            }
        }
        cout<<small<<endl;
    }    
    
    return 0;
}