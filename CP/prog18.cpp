#include<iostream>
#include<string>
using namespace std;

string replace(string& str, int len)
{
    for(int i=0;i<len;i++)
    {
        str[i]='*';
    }
    return str;
}


int main()
{
    string s="gaurav gaurav";
    string str;
    getline(cin, str);
    int len=s.size();
    int len1=str.size();
    int flag=0;
    if(len>len1)
    {
        for(int i=0;i<len1;i++)
        {
            if(s[i]!=str[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            replace(str,len1);
        }
    }
    else
    {
        for(int i=0;i<len;i++)
        {
            if(s[i]!=str[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            replace(str,len);
        }
    }
    cout<<str;

return 0;
}