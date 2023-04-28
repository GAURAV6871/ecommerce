#include<iostream>
using namespace std;
                            //TRANSPOSE OF A MATRIX

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
               //Code for TRANSPOSE OF A MATRIX begins here
    cout<<"\nthe transpose of the matrix is displayed as follows"<<endl;
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=j)
            {
                temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
            }
        }    
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}    
