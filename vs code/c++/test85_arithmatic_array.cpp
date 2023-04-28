#include<iostream>
using namespace std;
 
int main()
{
    int n,i,t,crr=2,cd=0,ans=2;             //pd=previous common difference       cd=current common difference
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int pd=a[1]-a[0];
        for(i=2;i<n;i++)
        {
            cd=a[i]-a[i-1];
            if(pd==cd)
            {
                crr++;
            }
            else
            {
                pd=a[i]-a[i-1];
                crr=crr+2;
            }
            ans=max(ans,crr);
        }
        cout<<ans<<endl;
    }
return 0;        
} 