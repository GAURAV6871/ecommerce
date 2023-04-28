#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int mid=1;
	    if(n%2==0)
	    {
	        mid=n/2;
	    }
	    else
	    {
	        mid=(n+1)/2;
	    }
	    int flag=0;
	    int i,j=mid;
        
	    for(i=0;i<mid;i++,j++)
	    {
            
	        if(s[i]!=s[j])
	        {
	            flag=1;
	            //cout<<s[i]<<" ";
	            break;
	            
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }
	}
	
	return 0;
}
