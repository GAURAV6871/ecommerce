#include<iostream>
using namespace std;

int main()
{
    int n,c,sum=0,prod=1;
    cin>>n;
    cin>>c;
    if(c==1)
    {
        for(int i=1;i<=n;i++)
        {
            sum+=i;
        }
        cout<<sum<<endl;
    }
    else if(c==2)
    {
        for(int i=1;i<=n;i++)
        {
            prod*=i;
        }
        cout<<prod<<endl;
    }
    else 
    {
        cout<<"-1"<<endl;
    }

return 0;
}