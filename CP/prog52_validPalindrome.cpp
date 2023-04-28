#include<iostream>
#include<string>
using namespace std;


bool isPalindrome(string s) 
{
    if(s.size()==0)
    {
        return true;
    }    
    string str="";
    int i=0;
    for(char ch: s)
    {
        if(isalpha(ch))
        {
            str[i]=ch;
            i++;
        }
    }
        
    string reversed(str);
    reverse(reversed.begin(),reversed.end());
    //cout<<reversed<<endl;

    if (str == reversed) 
    {
        return true;
    }

    return false;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
return 0;
}