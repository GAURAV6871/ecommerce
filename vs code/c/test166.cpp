#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b,area[n],i,max=-1,w,h,p;
	    cin>>n>>b;
	    for(i=1;i<=n;i++)
	    {
	        cin>>w>>h>>p;
	        area[i]=1;
	        if(p<=b)
	        {
	            area[i]=w*h;
	        } 
	        else
	        {
	            area[i]=0;
	        }
	    }
	    for(i=1;i<=n;i++)
	    {
	        if(area[i]>=max)
	        {
	            max=area[i];
	        }
	    }
	    if(max==0)
	    {
	        cout<<"no tablet"<<endl;    
	    }
	    else
	    {
	        cout<<max<<endl;
	    }
	}
	return 0;
}
