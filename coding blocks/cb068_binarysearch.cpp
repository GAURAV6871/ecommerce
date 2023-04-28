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
	int mid,s=0,l=n-1,flag=0;
	while(s<=l)
	{
		mid=(s+l)/2;
		if(mid==m)
		{
			flag=1;
			break;
		}
		else if(m>a[mid])
		{
			s=mid+1;
		}
		else if(m<a[mid])
		{
			l=mid-1;
		}
	}
	if(flag==0)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<mid<<endl;
	}
return 0;
}