#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t,k,i,m=1,sum=0,a[1000],arr[1000];
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
	        arr[i]=__gcd(a[i],a[i+1]);
	        sum+=arr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
