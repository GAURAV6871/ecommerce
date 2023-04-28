#include<iostream>
using namespace std;

int main()
{
    string str="hello world";
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    string str2="hello world";
    reverse(str2.begin()+2,str2.end()+4);
    cout<<str2;
return 0;
}