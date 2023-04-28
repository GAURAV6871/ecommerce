#include<iostream>
using namespace std;

void toh(int n, char src,char dest, char hlp)
{
    //base case
    if(n==0)
    {
        return;
    }
    //recursive case
    toh(n-1,src,hlp,dest);
    cout<<"move disk from "<<src<<" to "<<dest<<endl;//<<" using source "<<hlp<<endl; 
    toh(n-1,hlp,dest,src);
}

int main()
{
    int n=3;
    toh(n,'a','c','b');     //a=source, b=helper,  c=destination
return 0;
}