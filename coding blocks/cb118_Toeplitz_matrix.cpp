#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cin>>m>>n;
    int a[100][100];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int flag=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            for(int k=1;k<n-3;k++)
            {
                if(a[i][j]==a[i+k][j+k])
                {
                    flag=1;
                }
            }    
        }
    }
    if(flag==1)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
return 0;
} 