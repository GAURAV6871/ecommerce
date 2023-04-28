#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string s,s1;
    cin>>s;
    int num,num1;
    num=stoi(s);
    cin>>s1;
    num1=stoi(s1);
    
    int sum=0;
    sum=num+num1;

    stringstream ss;
    ss << sum;
    string str = ss.str();

    cout<<str;
return 0;
}