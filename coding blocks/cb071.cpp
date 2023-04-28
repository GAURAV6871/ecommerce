#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,p=0,q=0,c=0;
        cin>>n;
        int r[n];     //shows price of all roses
        for(int i=0;i<n;i++)
        {
            cin>>r[i];
        }
        int m;    //variable to show money
        cin>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(r[i]+r[j]==m)
                {
                    p=r[i];
                    q=r[j];
                }
            }
        }
        cout<<"deepak should buy roses whose prices are "<<q<<" and "<<p<<endl;
        cout<<c;
        t++;
    }
return 0;
}