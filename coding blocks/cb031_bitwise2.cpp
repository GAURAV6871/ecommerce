#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    //for(int inc=1;inc<=32;inc++)  //this condition for lop is also used
    for(int inc=1;inc<=log2(n+1);inc++)
    {
        if(((n>>inc)&1)==1)
        {
            count++;
        }
    }    
    cout<<count<<endl;
return 0;
}