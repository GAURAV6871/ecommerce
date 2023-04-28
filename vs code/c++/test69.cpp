#include<iostream>
using namespace std;
                      /* 1
                         2 2  
                         3 3 3
                         4 4 4 4   
                         5 5 5 5 5       */              
int main()
{
    int m,n,i,j;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<i;
        }
        cout<<endl;
    }
    return 0;
}