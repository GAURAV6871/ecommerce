#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int d;
	    cin>>d;
	    int num=0;
	    for(int i=0;i<d;i++)
	    {
	        int temp;
	        cin>>temp;
	        num=num*10+temp;
	        cout<<num<<" "<<endl;
	    }
	    //cout<<"number is: "<<num<<" ";
	    int rem=1;
	    int flag=0;
	    
	    while(num>0)
	    {
	        rem=num%10;
	        if(rem==0 || rem==5)
	        {
	            cout<<"YES"<<endl;
	            flag=1;
	            break;
	            
	        }
	        num/=10;
	    }
	    if(flag==0)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
