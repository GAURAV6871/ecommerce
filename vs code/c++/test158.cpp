#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,sum=0,fav;
	    double p=1;
	    cin>>x>>y;
	    sum=x+y;
	    if(sum>=2 && sum<=6)
	    {
            fav=6-sum;
	        p=fav/6;
	        cout<<p<<endl;
	    }
        else
        {
            cout<<"yes"<<endl;
        }
	}
	return 0;
}
