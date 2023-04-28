#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    i=n;
    while(i>=1)
    {
        j=1;
        while(j<=i)
        {
            cout<<i;
            j++;
        }
        i--;
        cout<<endl;
    }
    return 0;
}