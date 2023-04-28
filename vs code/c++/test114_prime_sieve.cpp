#include<iostream>
using namespace std;

void prime_sieve(int n)
{
    int a[100]={0},i;
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)                 //all the numbers that are unmarked
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=1;         //marked numbers
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(a[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    prime_sieve(n);
    return 0;
}