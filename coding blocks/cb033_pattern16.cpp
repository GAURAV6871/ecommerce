#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        //first print n-i spaces
        //followed bi 2i-1 stars
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        //first print n-i spaces
        //followed bi 2i-1 stars
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;
}