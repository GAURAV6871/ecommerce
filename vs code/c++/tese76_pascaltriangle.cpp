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
    int n,i,j,factn,factr,fact1,combination=1,diff=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            factn=factorial(i);
            factr=factorial(j);
            diff=i-j;
            fact1=factorial(diff);
            combination=factn/(factr*fact1);
            cout<<combination<<" ";
        }
        cout<<endl;
    }
    return 0;
}