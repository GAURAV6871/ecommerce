//gcd and extended gcd
#include<iostream>
using namespace std;


int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
        
    }
    return gcd(b,a%b);
}

int main()
{
 int x=110;
 int y=330;
 cout<<gcd(x,y) ;  
return 0;
}