#include<iostream>
#include<string>
using namespace std;
int lengthOfLastWord(string s) 
{
    int length=0;
    int length1=0;
    for(int i=0;i<s.size();i++)
    {
        if(!isalpha(s[i]))
        {
            length=0;
        }
        else
        {
            length++;
            length1=length;
        }        
    }  
    return length1;   
}

int main()
{
    string s;
    getline(cin,s);

    cout<<lengthOfLastWord(s)<<endl;
    
return 0;
}