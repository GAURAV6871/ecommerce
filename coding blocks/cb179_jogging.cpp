#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,sum=0;
	    cin>>n>>x;
        int a[n];
        if(n==1)
        {
	        a[0]=x;
            cout<<a[1]<<endl;
        }    
        else if(n>1)
        {
            a[0]=x;
	        for(int i=1;i<=n;i++)
	        {
				for(int j=0;j<=i;j++)
				{
					sum+=a[j];
				}
			    a[i]=sum;
	        }
	        cout<<sum<<endl;
        }
            
	}
	return 0;
}
