//gcd and extended gcd
#include<iostream>
using namespace std;


int extendedgcd(int a,int b, int &x, int &y)
{
    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    int x1,y1;
    int g=extendedgcd(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}

int main()
{
    int x;
    int y;
    cout<<extendedgcd(110,125,x,y)<<endl;
    cout<<"x: "<<x;
    cout<<endl<<"y: "<<y<<endl;

return 0;
}