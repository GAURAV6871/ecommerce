#include <iostream>
using namespace std;

void find_no_of_squares(int &n, int &count)
{
    int k;
    for(int i=1;i<=n;)
	    {
	        
	        if(i*i<=n)
	        {
	            k=i;
	            i++;
	        }
            else
            {
                n=n-(k*k);
	            count++;
	            break;
            }    
	    }
}

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n; cin>>n;
	    int count=0;
	    while(n>=0)
	    {
            if(n==0)
            {
                cout<<count<<endl;
                break;
            }
    	    find_no_of_squares(n,count);
	    }   
	}
	return 0;
}
