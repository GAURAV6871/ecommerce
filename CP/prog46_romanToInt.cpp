#include<iostream>
#include<string>
using namespace std;

int romanToInt(string s) 
{
    int num=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='I')
        {
            num+=1;
        }
        else if(s[i]=='V')
        {
            num+=5;
        }
        else if(s[i]=='X')
        {
            num+=10;
        }
        else if(s[i]=='L')
        {
            num+=50;
        }
        else if(s[i]=='C')
        {
            num+=100;
        }
        else if(s[i]=='D')
        {
            num+=500;
        }
        else if(s[i]=='M')
        {
            num+=1000;
        }
    }
    return num;
}

int main()
{
    string s;
    cin>>s;
    cout<<romanToInt(s);


return 0;
}