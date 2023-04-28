#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,r=0,g=0,b=0;
	    cin>>n;
	    string s;
	    cin>>s;
        for(i=1;i<n;i++)
        {
            if(s[i]=='r')
            {
                r++;
            }
            else if(s[i]=='g')
            {
                g++;
            } 
            else if(s[i]=='b')
            {
                b++;
            }  
        }
        if(r==n || g==n  || b==n)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<r+g<<endl;
        }
	}
	return 0;
}
