#include<iostream>
using namespace std;
                            //TRANSPOSE OF A MATRIX

int main()
{
    int n,m,i,j,flag=0;
    cout<<"enter the no of rows & columns of matrix"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"enter the elements of the matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,c=m-1;
    cout<<"enter the element to be searched "<<endl;
    int num;
    cin>>num;
    while(r<n && c>=0)
    {
        if(num==a[r][c])
        {
            flag=1;
        }
        if(num>a[r][c])
        {
            r++;
        }
        else 
        {
            c--;
        }
    }
    if(flag==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
return 0;
}    
