#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p,k,i,temp,count=0;
	    cin>>n>>p>>k;
	    temp=0;
	    
	    for(i=0;i<n;i++)
	    {
            if(temp<=p)
            {
	            if(i%k==temp)
	            {
	                count++;
	                temp++;
	            }
            }    
	    }
	    cout<<count<<endl;
	}
	return 0;
}
