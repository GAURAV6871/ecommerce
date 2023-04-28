#include<iostream>
using namespace std;

int mul(int n,int m)
{
    // base case
    if (n==0)
    {
        return 1;
    }
    
    // recursive case
    return mul(n-1,m)+m;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<mul(n,m);
return 0;
}