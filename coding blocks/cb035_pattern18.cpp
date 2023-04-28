#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //print the first row of stars
    for(int i=1;i<2*n-1;i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
    
    //print the 2nd pattern
    for(int i=n-1;i>=1;i--)
    {   //print (n-1) stars
        for(int j=1;j<=n-1;j++)
        {
            cout<<"*";
        }    
        //print 2i-1 spacea
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<" ";
        }

        //print n-1 stars
        for(int j=1;j<=n-1;j++)
        {
            cout<<"*";
        }    
        cout<<endl;


    //part 3
    for(int i=2;i<n;i++)
    {
        for(int j=2;j<)
    }
    }


return 0;
}