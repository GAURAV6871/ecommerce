#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;  cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int maximum=-1;
	    
	    for(int i=0;i<n;i++)
	    {
            int count=0;
	        for(int j=0;j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                count++;
	            }
	        }
	        maximum=max(count, maximum);
	        //cout<<maximum<<endl;
	    }
	    cout<<n-maximum<<endl;
	}
	return 0;
}
