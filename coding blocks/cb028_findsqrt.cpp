#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float sqrt=0;
    while(sqrt*sqrt<=n)
    {
        sqrt=sqrt+1;
    }
    sqrt=sqrt-1;
    while(sqrt*sqrt<=n)
    {
        sqrt=sqrt+0.1;
    }
    sqrt=sqrt-0.1;
    while(sqrt*sqrt<=n)
    {
        sqrt=sqrt+0.01;
    }
    sqrt=sqrt-0.01;
    cout<<"square root of the number is "<<sqrt<<endl;

return 0;
}