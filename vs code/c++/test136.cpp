#include<iostream>
using namespace std;

int main()
{
    int n,i,n1=1,n2=1,sum=0;
    cin>>n;
    if(n==1)
    {
        cout<<n1<<endl;
    }
    else if(n==2)
    {
        cout<<n2<<endl;
    }
    else
    {
    	for(int i=1;i<n-1;i++)
    	{
        	sum=n1+n2;
        	n1=n2;
        	n2=sum;
    	}    
    cout<<sum<<endl;
    }    
return 0;
}  