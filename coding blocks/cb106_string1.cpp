#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    str="as";
    cout<<str<<endl;
    string str2("hello world");
    cout<<str2<<endl;
    string str4;
    cin>>str4;
    cout<<str4<<endl;
    string str5;
    getline(cin,str5, '&');
    cout<<str5<<endl;
return 0;
}