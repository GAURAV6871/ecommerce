#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,rem=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        
    }
    cout<<sum<<endl;
return 0;
}