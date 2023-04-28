#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s="heidi";
    string t;
    getline(cin,t);
    int n;
    n=t.length();
    if(n<=5)
    {
        cout<<"NO"<<endl;
    }
    else
    {    
        int j=0;
        for(int i=0;i<n && j<=5;i++)
        {
            if(s[j]==t[i])
            {      
                j++;
            }
        }
        if(j==5)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }    

return 0;
}