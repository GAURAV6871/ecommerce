#include<iostream>
using namespace std;


int recurrsion(int n)
{
    if(n==0)
    {
        return 1;
    }
    int a=recurrsion(n-1);
    return n*a;
}


int main()
{
    int n;
    cin>>n;
    cout<<recurrsion(n)<<endl;;

return 0;
}