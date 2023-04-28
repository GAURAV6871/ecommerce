#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n)
    {
        if(n%2==0)
        {
            n=n/2;
        }
        else
        {
            n--;
        }
        count++;
    }
    cout<<count<<endl;
return 0;
}