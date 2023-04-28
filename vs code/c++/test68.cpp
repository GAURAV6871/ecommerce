#include<iostream>
using namespace std;
                      /*     *
                            **
                           ***
                          **** 
                         *****       */              
int main()
{
    int m,n,i,j;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(j<=m-i)
            {
                cout<<" ";
            }    
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}