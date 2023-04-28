#include<iostream>
using namespace std;

int multiplication(int n,int i)
{
    int prod;
    if(i>10)
    {
        return 0;
    }
        prod=n*i;
        cout<<n<<" * "<<i<<" = "<<prod<<endl;
        return multiplication(n,i+1);
}

int main()
{
    int n=15;
    multiplication(n,1);
}