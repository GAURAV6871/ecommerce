#include<iostream>
using namespace std;
int main()
{
    int a=3, b=4, c=7;
    cout<<"the value of a without setw(10) "<<a<<endl;
    cout<<"the value of b without setw(10) "<<b<<endl;
    cout<<"the value of c without setw(10) "<<c<<endl<<endl<<endl;
    cout<<"the value of a with setw(10) "<<setw(10)<<a<<endl;
    cout<<"the value of b with setw(10) "<<setw(10)<<b<<endl;
    cout<<"the value of c with setw(10) "<<setw(10)<<c<<endl;
    return 0;
}