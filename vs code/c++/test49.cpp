#include <iostream>
#include<iomanip>
using namespace std;

int main() 
{
	int t,price,qty;
	float disc=1,prod=1;
	cin>>t;
	while(t--)
	{
	    cin>>qty>>price;
	    if(qty>1000)
	    {
	        prod=qty*price;
	        disc=0.1*prod;
	        prod=prod-disc;
	        cout<<setprecision(6)<<fixed<<prod;
	    }
	    else
	    {
	        prod=qty*price;
	        cout<<setprecision(6)<<fixed<<prod;
	    }
	}
	// your code goes here
	return 0;
}
