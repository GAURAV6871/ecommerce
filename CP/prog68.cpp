#include<iostream>
#include<string>
using namespace std;

string reverseWords(string &s) 
{
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        int count=0;
        int start=0;
        int j=i;
        while(s[j]!='')
        {
            count++;
            j++;
        }
        reverse(start, count-1);
    }  
    return s;  
}

int main()
{
    string s; getline(cin,s);
    cout<<reverseWords(s);
return 0;
}