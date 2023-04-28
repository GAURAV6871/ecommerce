#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[10000];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		{
			break;
		}
	}
	if(i>=n)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<i<<endl;
	}
return 0;
}