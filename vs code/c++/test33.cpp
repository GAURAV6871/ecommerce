#include<iostream>
using namespace std; 
int main() 
{
    int n,i,count = 0;
    long long fact=1,fac;

    cout<<"enter the no you want to find factorial of"<<endl;
    cin>>n;
    for(i=1;i<n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of the no is "<<fact<<endl;
    
    int m = 0;
    for(long long i = 10 ; i < fact ; i*=10)
    {
        if(fact%i == 0)
        {
            m++;
        }
    }
    cout<<m;

return 0;
}