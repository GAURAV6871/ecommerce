#include<iostream>
using namespace std;

int main()
{
    int t,n,a[20],i,s;
    cin>>t;
    for(int m=0;m<t;m++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        if(a[0]==a[n])
        {
            for(i=0;i<n;i++)
            {
                s=a[0];
                if(s!=a[i+1])
                {   
                    cout<<i;
                }
            }
        }
        else
        {
            for(i=0;i<n;i++)
            {
                s=a[i];
                if(a[i]==a[i+1])
                {   
                    cout<<i;
                }
            }
        }
        
    }
    return 0; 

}
