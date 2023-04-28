#include<iostream>
#include<math.h>
using namespace std;

void poweroftwo(int n)
{
    if(n>1)
    {
        n=n/2;
        poweroftwo(n);
    }
    else if(n=1)
    {
        cout<<"the no is pow of 2"<<endl;
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
    poweroftwo(n);
}