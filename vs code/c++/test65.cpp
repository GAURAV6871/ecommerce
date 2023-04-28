#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cin>>m>>n;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}