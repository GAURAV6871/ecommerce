#include<iostream>
#include<math.h>
using namespace std;

void poweroftwo(int n)
{
    while(n%2==0)
    {
        n=n/2;
    } 
    if(n==1)
    {
        cout<<"the no is power of 2"<<endl;
    }   
    else
    {
        cout<<"the no is not power of 2"<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    poweroftwo(n);
}