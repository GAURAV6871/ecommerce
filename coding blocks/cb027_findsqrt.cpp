#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if(i*i==n)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(i>n/2)
    {
        cout<<"not a perfect sq"<<endl;
    }
return 0;
}