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
    int num;
    cout<<"enter the element to be searched for"<<endl;
    cin>>num;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(num==a[i][j])
            {
                cout<<"the element is present at "<<i<<","<<j<<endl;
            }
        }
    }
return 0;    
}
