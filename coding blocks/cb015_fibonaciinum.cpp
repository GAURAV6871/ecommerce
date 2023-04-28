#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,c=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=2;
    if(n==0)
    {
        cout<<"the "<<n<<"th fibonacci number is "<<0<<endl;
        return 0;    
    }
    else if(n==1)
    {
        cout<<"the "<<n<<"th fibonacci number is "<<1<<endl;
        return 0;    
    }
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<"the "<<n<<"th fibonacci number is "<<c<<endl;

return 0;
}