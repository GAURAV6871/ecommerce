#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ int D,d,P,Q;
	cin>>D>>d>>P>>Q;
	int sum=0;
	for(int i =0;i*d<D;i++)
	{    int n=D-(i*d);
	if(n<d)
	{
	    sum= sum + n*(P+(Q*i));
	}else
	{
	    sum = sum + d*(P+(Q*i));
	}
	}
	  cout<<sum<<endl;  
	 }
// your code goes here
	return 0;
}