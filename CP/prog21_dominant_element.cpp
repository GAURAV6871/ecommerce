#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int count[n+1]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        count[a[i]]++;
	    }
	    sort(count,count+n+1);
	    for(int i=0;i<n+1;i++)
	    {
	        cout<<count[i]<<endl;
	    }
	    if(count[0]==count[1])
	    {
	        cout<<"no"<<endl;
	    }
	    else
	    {
	        cout<<"yes"<<endl;
	    }
	}
	return 0;
}
