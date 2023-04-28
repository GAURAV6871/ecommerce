#include<iostream>
using namespace std;



void increase(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    sorted(n-1);
}

void dec(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<" ";
    sorted(n-1);
}
int main()
{
    int n;
    cin>>n;
    sorted(n);
return 0;
}