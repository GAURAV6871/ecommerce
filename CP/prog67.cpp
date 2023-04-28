#include<iostream>
using namespace std;

bool checkRecord(string s) 
{
    int l=0;
    int a=0;
    for(char ch: s)
    {
        if(ch=='A')
        {
            a++;
        }
    }   
    int flag=1; 
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<" ";
        if(s[i]=='L')
        {
            if(s[i+1]=='L' && s[i+2]=='L')
            {
                flag=0;
                return false;
            }
        }
    }
    cout<<a<<" "<<flag<<endl;
    cout<<endl;
    if(a<2 &&  flag==1)
    {
        return true;
    }
        
} 

int main()
{
    string s; cin>>s;
    cout<<checkRecord(s);
return 0;
}