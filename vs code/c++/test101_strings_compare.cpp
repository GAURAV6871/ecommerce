#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(s2.compare(s1)==0)
    {
        cout<<"strings are equal"<<endl;
    }
    else
    {
        cout<<"strings are not equal"<<endl;  
    }    
return 0;    
} 