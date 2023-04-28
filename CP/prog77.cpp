#include<iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int k; cin>>k;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=k;j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }
return 0;
}
