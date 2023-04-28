#include <iostream>
#include<string>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
        //cout<<s;

	    int count0=0,count1=0;
	    int n=s.length();
	    for(int i=0;i<n;i++)
	    {
	        
	        if(count1==10 && count0==10)
	        {
	            if(s[i]=='1' && s[i+1]=='1')
	            {
	                cout<<"WIN"<<endl;
	                break;
	            }
	            else if(s[i]=='0'  && s[i+1]=='0')
	            {
	                cout<<"LOSE"<<endl;
	                break;
	            }
	            else
	            {
	                continue;
	            }
                
	        }
            else
            {
	            if(s[i]=='1')
	            {
	                count1++;
	            }
	            else
	            {
	                count0++;
	            }
            }
        }
        if(count0==11)
	    {
	        cout<<"LOSE"<<endl;
	    }
	    else if(count1==11)
	    {
	        cout<<"WIN"<<endl;
	    }
        //cout<<" "<<count0<<" "<<count1<<endl;  
	}
	return 0;
}
