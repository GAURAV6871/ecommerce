#include<iostream>
using namespace std;
                            //TRANSPOSE OF A MATRIX

int main()
{
    int n,m,i,j,p,q,k;
    cout<<"enter the no of rows of 1st matrix"<<endl;
    cin>>n;
    cout<<"enter the no of columns of 1st matrix"<<endl;
    cin>>m;
    int a[n][m];
    cout<<"enter the elements of the 1st matrix"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the no of rows of 2nd matrix"<<endl;
    cin>>p;
    cout<<"enter the no of columns of 2nd matrix"<<endl;
    cin>>q;
    int b[p][q];
    cout<<"enter the elements of the 2nd matrix"<<endl;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"\nthe 1st matrix is printed as"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\nthe 2nd matrix is printed as"<<endl;
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    int ans[n][q];

    if(m!=p)      //for matrices of order n1*n2 and n3*n4 multiplication is possible only when n2 & n3 are equal
    {
        cout<<"the multiplication can not be performed"<<endl; 
        return 0;
    }
    else
    {
        int ans[n][q];
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                ans[i][j]=0;
            }
            cout<<endl;
        }
        for(i=0;i<n;i++)                   //iterating the rows of first matrix
        {   
            for(j=0;j<q;j++)              //iterating the columns of second matrix
            {
                for(k=0;k<m;k++)
                {
                    ans[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}    
