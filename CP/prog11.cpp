#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int Max=-1;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        count=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[j]==a[i])
	            {
	                count++;
	            }
	        }
	        Max=max(count,Max);
	        
	    }
	    cout<<n-count<<endl;
	}
	
	return 0;
}
