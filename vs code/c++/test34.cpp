#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n,a[n],prod=1,i,max=1;
    float sr;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        /*for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }*/
        for(i=0;i<n;i++)
        {
            prod=prod*a[i];
        }
        /*cout<<prod<<endl;*/
        for(i=1;i<=prod;i++)
        {
            if(prod%i==0)
            {
                sr=sqrt(i);
                if(sr*sr==i)
                {
                    max=i;

                }
            }
        }
        cout<<max;

    }
    return 0;
}