#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int l[n],r[n],a[n],max=0,count=0,pos;
        for(i=1;i<=n;i++)
        {
            cin>>l[i];
        }
        for(i=1;i<=n;i++)
        {
            cin>>r[i];
        }
        for(i=1;i<=n;i++)
        {
            a[i]=1;
            a[i]=l[i]*r[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==max)
            {
                count++;
                pos=i;
            }
        }
        if(count==1)
        {
            cout<<pos<<endl;
        }
    }    
	return 0;
}
