#include<iostream>
using namespace std;
                      /* 1 2 3 4 5 
                         1 2 3 4 
                         1 2 3
                         1 2    
                         1       */              
int main()
{
    int m,n,i,j;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=m;j>=1;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
return 0;
}        