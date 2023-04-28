#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *point;
    point =&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<point<<endl;
    cout<<*point<<endl;
return 0;    
}