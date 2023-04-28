#include<iostream>
using namespace std;

int main()
{
    int n,first=1, last=1;
    cout<<"enter a no";
    cin>>n;
    last=n%10;
    cout<<"last digit is "<<last;
    while(n>=10)
    {
        first=n/10;
    }
    cout<<"first digit is "<<first;
    cout<<"last digit is "<<last;
return 0;
}