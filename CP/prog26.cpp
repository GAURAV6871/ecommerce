#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, k;
        cin>>a>>b>>k;
        int diff=b-a;
        
        if(diff==0)
        {
            cout<<0<<endl;
        }
        else if(diff<k)
        {
            cout<<1<<endl;
        }
        else if(diff%k==0)
        {
            cout<<diff/k<<endl;
        }
        else if(diff%k>0)
        {
            cout<<diff/k<<endl;
            int steps=diff/k + 1;
            cout<<steps<<endl;
        }
    }
return 0;
}