#include<iostream>
using namespace std;

int main()
{
    int t,n,i,max;
    cout<<"enter the no of test cases "<<endl;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        cout<<"\nenter the no of days"<<endl;
        cin>>n;
        a[n+1]; 
        a[n]=-1;
        cout<<"\nenter the no of people on n days"<<ednl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        max=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]>mx && a[i]>a[i+1])
            {
                count++;
            }
            mx=max(mx,count);
        }
        cout<<endl<<count<<endl;
    }

}