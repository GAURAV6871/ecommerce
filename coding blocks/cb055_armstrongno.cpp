#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,rem=1,power=1,sum=0;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    while(n>0)
    {
        rem=n%10;
        power=pow(rem,count);
        sum+=pow(rem,power);
        n=n/10;
        power=1;
    }
    if(sum==n)
    {
        cout<<boolalpha<<true<<endl;
    }
    else
    {
        cout<<boolalpha<<false<<endl;
    }
    cout<<endl;
return 0;
}