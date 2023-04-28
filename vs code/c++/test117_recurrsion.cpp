#include<iostream>
using namespace std;

int power(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    int power_1=power(n,p-1);
    return n*power_1;
}


int main()
{
    int n,p;
    cin>>n;
    cin>>p;
    cout<<power(n,p)<<endl;
    return 0;
}