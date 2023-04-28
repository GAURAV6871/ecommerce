#include<iostream>
using namespace std;


bool issafe(int** a, int x,int y,int n)
{
    if(x<n && y<n && a[x][y]==1)
    {
        return true;
    }
    return false;
}
bool ratinmaze(int** a,int x,int y, int n,int** solarr)
{
    if(x==n-1 && y==n-1)
    {
        solarr[x][y]=1;
        return true;
    }
    if(issafe(a,x,y,n))
    {
        solarr[x][y]=1;
        if(ratinmaze( a,x+1,y,n,solarr))
        {
            return true;
        }
        if(ratinmaze( a,x,y+1,n,solarr))
        {
            return true;
        }   
        solarr[x][y]=0;
        return false;
    }    
    return false;
}
int main()
{
    int n,i,j;
    cin>>n;
    int** a=new int*[n];
    for(i=0;i<n;i++)
    {
        a[i]=new int[n];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int** solarr=new int*[n];
    for(i=0;i<n;i++)
    {
        solarr[i]=new int[n];
        for(j=0;j<n;j++)
        {
            solarr[i][j]=0;
        }
    }
    if(ratinmaze(a,0,0,n,solarr))
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;i++)
            {
                cout<<solarr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}