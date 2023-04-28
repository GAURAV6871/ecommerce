#include<iostream>
using namespace std;

int main()
{
    int n,a=0,b=1,c=0,flag=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    int i=2;
    if(n==0  || n==1)
    {
        cout<<"the number is a part of fibonacci series"<<endl;
        return 0;    
    }
    while(i<=n && c<=n)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        if(c==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"the number is the part of the fibonacci series"<<endl;
    }
    else
    {
        cout<<"the number is not the part of the fibonacci series"<<endl;
    }    
return 0;
}