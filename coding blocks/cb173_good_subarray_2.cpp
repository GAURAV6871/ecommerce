#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int csum[n+1];
        csum[0]=0;
        for(int i=1;i<=n;i++)
        {
            csum[i]=csum[i-1]+a[i];
        }

        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum=csum[j+1]-csum[i];
            }
            if(sum%n==0)
            {
                count++;
            }
        }
        cout<<endl<<count<<endl;
        t--;
    }    
    
	return 0;
}