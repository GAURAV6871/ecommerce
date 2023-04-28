#include<iostream>
using namespace std;


void poweroftwo(int n)
{
    if((n & n-1)==0)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}


int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    poweroftwo(n);
return 0;    
}