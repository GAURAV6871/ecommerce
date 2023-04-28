#include<iostream>
using namespace std;

int main()
{
    int n,i=1,j,p=1;
    cin>>n;
    while(i<=n)
    {
        j=i;
        while(j<=2*i-1)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}