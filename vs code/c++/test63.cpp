#include<iostream>
using namespace std;
                               //amstrong no
int main()
{
    int num,n,sum=0,digit;
    long cube=1;
    cin>>num;
    n=num;
    while(n!=0)
    {
        digit=n%10;
        cube=digit*digit*digit;
        sum+=cube;
        n=n/10;
    }
    if(sum==num)
    {
        cout<<"/n the given no is a amstrong no"<<endl;
    }
    else
    {
        cout<<"/n the given no is not a amstrong no"<<endl;
    }
}