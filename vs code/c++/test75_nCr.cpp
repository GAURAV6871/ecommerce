#include<iostream>
using namespace std;

int factorial(int a)
{
    int fact=1,i;
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n,r,factn,factr,fact1,combination=1,diff=0;
    cin>>n;
    cin>>r;
    factn=factorial(n);
    factr=factorial(r);
    diff=n-r;
    fact1=factorial(diff);
    combination=factn/(factr*fact1);
    cout<<combination<<endl;
    return 0;
}