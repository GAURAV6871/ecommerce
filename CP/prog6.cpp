#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //int m=1e9+7;
    int sum=0;
    for(int i=1;i<=n;i++)      //this will take n root n time
    {
        sum+=(n/i) *i;
    }

    cout<<sum;
return 0;
}