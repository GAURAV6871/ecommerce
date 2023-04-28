#include<iostream>
using namespace std;

void swapfive(int a[100], int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=5;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int len=0;
    int m=n;
    while(m)
    {
        len++;
        m=m/10;
    }
    int a[100];
    int digit=1;
    int i=0;
    while(n>0 && i<len)
    {
        digit=n%10;
        a[len-1-i]=digit;
        n=n/10;
        i++;
    }
    cout<<endl;
    swapfive(a,len);

    return 0;
}