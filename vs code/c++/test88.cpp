#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the no to be checked"<<endl;
    int chck;
    cin>>chck;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=+a[j];
            if(sum==chck)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
return 0;    
}