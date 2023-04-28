#include<iostream>
using namespace std;


        //programme to reverse a number

int main()
{
    int n,rev=0,rem;
    cout<<"enter the no"<<endl;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    cout<<"/n the reversed no is "<<rev<<endl;
return 0;
}