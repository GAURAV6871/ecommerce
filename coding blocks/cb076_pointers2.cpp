#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int *p=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<sizeof(p)<<endl;
    cout<<&p<<endl;
    char ch='a';
    char* chp=&ch;
    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<chp<<endl;
    cout<<sizeof(chp)<<endl;

return 0;
}