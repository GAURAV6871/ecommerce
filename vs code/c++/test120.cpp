#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int s=n;
	    int count=0,countn=0,ans=0;
	    while(n--)
	    {
	        string s;
	        cin>>s;
	        int size=s.size();
	        for(int i =0;i<size;i++)
	        {
	            if(s[i]<='m'&&s[i]>='a')
	            {
                    count++;
	            }
	           
	        }
	        for(int i=0;i<size;i++)
	        {
	             if(s[i]<='Z'&&s[i]>='N')
	            {
	                countn++;
	            }  
	        }
	        if(count==size||countn==size)
	        {
	            ans++;
	        }
	        
	        
	    }
	    if(ans==s)
	    {
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	    
}
	
	
	// your code goes here
	return 0;
}