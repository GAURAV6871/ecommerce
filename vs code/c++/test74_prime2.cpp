#include<iostream>
using namespace std;   

int isprime(int a)
{
   int i,flag=0;
   for(i=2;i<a/2;i++)
   {
       if(a%i==0)
       {
           flag=1;
       }
   }
   return flag;
}          
int main()
{
    int t,a,b,i,prime=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            prime=isprime(i);
            if(prime!=1)
            {
                cout<<i<<endl;
            }
        }    
    }
return 0;
}  