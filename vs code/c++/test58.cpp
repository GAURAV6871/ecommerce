#include <iostream>
using namespace std;

int main() 
{
	int t,k,i,gcd,sum=0,a[1000],m=1;
    cin>>t;
	while(t--)
	{
	    cin>>k;
	    m=2*k;
	    for(i=1;i<=m;i++)
	    {
	        a[i]=k+(i*i);
	    }
	    for(i=1;i<=m;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	}
	// your code goes here
	return 0;
}