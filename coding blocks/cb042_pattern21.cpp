#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        //printing the numbers
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        //printing stars
        if(i!=5)
        {
            for(int j=n-1;j>=2*i-4;j--)
            {
                cout<<"* ";
            }
        }    
        cout<<endl;
    }
    cout<<endl;
return 0;
}