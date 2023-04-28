#include <iostream>
#include <vector>
#include <algorithm>
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
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    vector<int> v;
	    for(int i=1,k=0;i<n;)
	    {
	        if(a[i]!=a[i+1])
	        {
	            v.push_back(a[i]);
	            v.push_back(a[i+1]);
	            if(a[i+1]!=a[i+2] && i<n-1)
	            {
	                i+=2;
	                v.push_back(a[i+2]);
	            }
	        }
	        i++;
	    }
	        
	        
	    int count=0;
	    for(int i=0;i<v.size();i++)
	    {
	       count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
