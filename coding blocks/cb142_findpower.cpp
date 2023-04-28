#include<iostream>
using namespace std;

int findpower(int n, int x)
{
	if(n==0)
	{
		return 1;
	}
	return x * findpower(n-1,x);
}


int main() 
{
	int n,x;
	cin>>x>>n;
	cout<<findpower(n,x)<<endl;
	return 0;
}