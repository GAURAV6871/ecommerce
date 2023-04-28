#include<iostream>
using namespace std;

int main()
{
    int n,i,j,flag=0;
    cin>>n;
    cout<<2<<endl;
    for(i=3;i<=n;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                j=i;
                break;
            }
        } 
        if(i!=j)
        {
            cout<<i<<endl;
        }   
    }
return 0;
}