#include<iostream>
using namespace std;
                      //       butterfly pattern                
int main()
{
    int m,i,j;
    cin>>m;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
                    cout<<"*";     
        }
        int space=2*m-2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
                    cout<<"*";     
        }
        cout<<endl;
    }
    for(i=m;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
                    cout<<"*";     
        }
        int space=2*m-2*i;
        for(j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
                    cout<<"*";     
        }
        cout<<endl;
    }
    return 0;
}