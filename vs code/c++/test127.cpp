#include<iostream>
using namespace std;

int main()
{
    int a,b,pow=1;
    cin>>a>>b;
    while(b>=1)
    {
        pow*=a;
        b--;
    }
    cout<<pow<<endl;
}