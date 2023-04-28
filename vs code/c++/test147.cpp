#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;
    ++a;
    cout<<a<<endl;
    cout<<*p<<endl;
return 0;
}