#include<iostream>
using namespace std;


int main()
{
    int n,m,i,j;
    cout<<"enter the no of rows"<<endl;
    cin>>n;
    cout<<"enter the no of columns"<<endl;
    cin>>m;
    int a[n][m];
    cout<<"enter the elements of the matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\nthe matrix is printed as"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
                       //code for printing of spiral order matrix starts here
    int row_start=0,column_start=0,row_end=n-1,column_end=m-1;    
    cout<<"the spiral form of matrix is printed as follows"<<endl;
    while(row_start<=row_end  && column_start<=column_end)           
    {
           for(int col=column_start; col<=column_end;col++)
           {
               cout<<a[row_start][col]<<" ";
           }
           row_start++;
           for(int row=row_start; row<=row_end;row++)
           {
               cout<<a[row][column_end]<<" ";
           }
           column_end--;
           for(int col=column_end; col>=column_start;col--)
           {
               cout<<a[row_end][col]<<" ";
           }
           row_end--;
           for(int row=row_end; row>=row_start;row--)
           {
               cout<<a[row][column_start]<<" ";
           }
           column_start++;
    }    
    cout<<endl;
return 0;
}