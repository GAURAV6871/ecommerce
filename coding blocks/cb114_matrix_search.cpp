#include<iostream>
using namespace std;


void matsearch(int a[][100], int m, int n)
{
    int target,i,j,flag=0;
    cout<<"enter the target"<<endl;
    cin>>target;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==target)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<i<<" "<<j<<endl;
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
    matsearch(a,m,n);
return 0;
}