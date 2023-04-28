#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<a<<" "<<a+1<<endl;
    a[0]=5;
    cout<<*a<<" "<<a[1]<<" "<<*(a+1)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(*a)<<endl;
    cout<<&a<<endl;
return 0;
}