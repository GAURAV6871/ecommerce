#include<iostream>
using namespace std;

int main()
{
	int i, j,n;
	cin>>n;

	for(i=n; i>=1; i--)
    {
		for(j=i; j<=n; j++)
        {
			cout<<j;
		}
		cout<<endl;
	}
return 0;
}