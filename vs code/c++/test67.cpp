#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cin>>m;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}