#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n;
    while(n--)
    {
        string str;
        cin>>str;
        l=str.size();
        if(l>10)
        {
            cout<<str[0]<<l-2<<str[l-1]<<endl;
        }
        else
        {
            cout<<str<<endl;
        }
    }
return 0;
}