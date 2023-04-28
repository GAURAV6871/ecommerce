#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int min=INT_MAX;
    int ans;
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(count<min)
        {
            min=count;
            ans=i;
        }
        count=0;
    }
    cout<<ans+1<<endl;
return 0;
}