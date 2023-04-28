#include<iostream>
using namespace std;
                      /* 1
                         1 2  
                         1 2 3
                         1 2 3 4   
                         1 2 3 4 5       */              
int main()
{
    int m,n,i,j;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
                cout<<j;
        }
        cout<<endl;
    }
    return 0;
}