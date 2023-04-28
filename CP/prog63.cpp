#include<iostream>
#include<string>
using namespace std;

void licenseKeyFormatting(string s, int k) 
{
    for(int i=0;i<s.size();i++)
    {
        if(islower(s[i]))
        {
            s[i]=toupper(s[i]);
        }
    }    
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='-' )
        {
            count++;
        }
    }  

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<count;


    
}


int main()
{
    string s;
    cin>>s;
    int k; cin>>k;
    licenseKeyFormatting(s,k);
return 0;
}