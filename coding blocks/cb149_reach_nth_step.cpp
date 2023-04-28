#include<iostream>
using namespace std;

int countways(int n, int k)
{
    if(n==0)
    {
        return 1;
    }
    int count=0;
    for(int j=1;j<=k;j++)
    {
        if(n-j>=0)
        {
            count+=countways(n-j,k);
        }
    }
    return count;
}

int main()
{
    int n=3,k=3;
    cout<<countways(n,k)<<endl;
return 0;
}