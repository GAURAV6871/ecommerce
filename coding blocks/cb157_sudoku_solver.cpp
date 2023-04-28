#include<iostream>
#include<cmath>
using namespace std;

bool canplacedigit(int grid[][100],int n,int i,int j,int d)
{
    for(int k=0;k<n;k++)
    {
        if(grid[i][k]==d || grid[k][j]==d)
        {
            return false;
        }
    }
    int rootn=sqrt(n);

    int sx =i/rootn * rootn;         //sx and sy are the starting indexes of the subgrid
    int sy =j/rootn * rootn;

    for(int x=sx;  x<sx+rootn;  x++)
    {
        for(int y=sy;  y<sy+rootn;  y++)
        {
            if(grid[x][y]==d)
            {
                return false;
            }
        }
    }
    return true;
}

void solve(int grid[][100], int n, int i,int j)
{
    
    //base case
    if(i==n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<grid[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    cout<<endl;
    return;

    if(j==n)
    {
        solve(grid,n,i+1,0);
        return;
    }
    if(grid[i][j]!=0)
    {
        solve(grid,n,i,j+1);
        return;
    }

    //if grid[i][j]th cell is empty
    for(int d=1;  d<=9;  d++)
    {
        if(canplacedigit(grid,n,i,j,d))
        {
            grid[i][j]=d;
            solve(grid,n,i,j+1);
            grid[i][j]=0;           //if we place a digit in a particular column and it is going 
                                    //to create a problem later on then we back track to the digit 
                                    //make it zero and try other different options for the same cell

        }
    }
}

int main()
{
    int n;
    cout<<"enter the size of sudoku"<<endl;
    cin>>n;
    int grid[100][100];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    solve(grid,n,0,0);
return 0;
}