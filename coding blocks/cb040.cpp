#include<iostream>
using namespace std;
int main() 
{
	int n,i,temp,flag=1,a[10],m;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
		m=a[i];
			for(int j=1;j<=n;j++)
			{
				if((a[j] & m)==0)
				{
					flag=0;
					temp=a[j];
				}
			}
	}
	if(temp)
	{
		cout<<temp;
	}
	return 0;
}