#include<iostream>
using namespace std;

int main()
{
    int count=0,i,a[100];
    long n,num;
    cin>>n;
    num=n;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    for(i=0;i<count;i++)
    {
        a[i]=n%10;
        n=n/10;
    }
    for(i=0;i<count;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}