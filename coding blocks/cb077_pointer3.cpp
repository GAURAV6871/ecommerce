//arithmatic of pointers
#include<iostream>
using namespace std;

int main()
{
    int x=516;
    int *xptr=&x;
    cout<<xptr<<endl;
    cout<<xptr+1<<endl;
    char ch='a';
    char *p=&ch;
    cout<<p<<endl;
    cout<<p+1<<endl;
    return 0;
}