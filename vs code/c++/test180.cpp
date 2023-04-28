#include <iostream>
using namespace std;

int main() 
{
	int t,odd2=1,even2=1,n1=1,n2=1,n=0,odd1=1,even1=1;
	cin>>t;
	while(t--)
	{
	    int a,b;
        cin>>a>>b;
	    if(a%2==0)
	    {
	        even1=a/2;
	        odd1=a/2;
	    }
	    else
	    {
	        even1=a/2;
	        odd1=(a/2)+1;
	    }
	    if(b%2==0)
	    {
	        even2=b/2;
	        odd2=b/2;
	    }
	    else
	    {
	        even2=a/2;
	        odd2=(a/2)+1;
	    }
	    n1=even1*even2;
        n2=odd1*odd2;
        n=n1+n2;  
        cout<<n<<endl;
	}
	return 0;
}
