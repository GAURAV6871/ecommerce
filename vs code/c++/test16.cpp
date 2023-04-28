#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b= &a;
    int** c=&b;
    cout<<"the value of a is "<<a<<endl;
    cout<<"the value of b is "<<b<<endl;
    cout<<"the value at the b is "<<*b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the value at the address of c is "<<*c;
    return 0;
}