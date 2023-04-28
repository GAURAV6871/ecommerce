#include<iostream>
using namespace std;

int main()
{
    int fact,count=0;
    cout<<"enter a no ";
    cin>>fact;

    while (fact != 0)
    {
        fact = fact / 10;
        ++count;
    }
    cout<<count;
}