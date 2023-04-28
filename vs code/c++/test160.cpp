#include<iostream>
#include<string.h>
using namespace std;

class solution
{
    public:
    bool chech_subsequence(string s,string t)
    {
        int l1,l2,j=0;
        l1=s.length();
        l2=t.length();
        for(int i=0;i<l2 && j<l1;i++)
        {
            if(s[j]==t[i])
            {
                j++;
            }
            return(j==l1);
        }    
    }    
};

int main()
{
    string s,t;
    solution a;
    cin>>s;
    cin>>t;
    a.chech_subsequence(s,t)?cout<<"yes"<<endl:cout<<"no";

return 0;
}