#include <iostream>
using namespace std;

int main() 
{
	int t;
    cout<<"enter the number of test cases"<<endl;
	cin>>t;
	while(t--)
	{
        cout<<"enter the value of a and b"<<endl;
	    int a,b,flag=0;
        cin>>a>>b;
	    if(b%a==0)
	    {
	        cout<<"yes"<<endl;
	    }
	    else
	    {
	        for(int i=1;i<=b;i++)
	        {
	            a=a+i;
	            b=b+i;
	            if(b%a==0)
	            {
	                cout<<"yes"<<endl;
	                flag=1;
	            }
	        }
	        if(!flag)
	        {
	            cout<<"no"<<endl;
	        }
	    }
	}
	return 0;
}
