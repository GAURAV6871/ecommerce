
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y;
    float diff=0;
    cin>>x;
    cin>>y;
    if(x>y)
    {
        cout<<y;
    }
    else if(x%5==0)
    {
        diff=y-x-0.5;
        cout<<setprecision(2)<<fixed<<diff;
    }
    else
    cout<<y;
}
