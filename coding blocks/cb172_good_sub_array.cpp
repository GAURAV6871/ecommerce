#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int count=0;
	
	    for(int i=0; i<n; i++) 
        {   	
		    for(int j=i; j<n; j++) 
            {
                int sum=0;
			    for(int k=i; k<=j; k++) 
                {
				    cout<<a[k]<<" ";
			    }
                cout<<endl;
                //if(sum%n==0)
                //{
                  //  count++;
                //}
		    }
	    }
        //cout<<count<<endl;
        t--;
    }    
    
	return 0;
}