#include<iostream>
#include<string>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=n;i>=1;i--)
	    {
	        string str;
	        getline(cin,str);
			cout<<str<<endl;
	        
	    }     
	}
	return 0;
}
