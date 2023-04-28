#include<iostream>
using namespace std;

int main()
{
    int n,n1=1,rev=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    while(n>0)
    {
        n1=n%10;
        rev=rev*10+n1;
        n=n/10;
    }
    cout<<"reverse of the number is "<<rev<<endl;
return 0;
}