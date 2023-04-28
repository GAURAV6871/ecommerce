#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n,a[10],prod=1,i,max=1;
    float sr;
    cout<<"enter the no of test cases"<<endl;
    cin>>t;
    for(int m=1;m<=t;m++)
    {
        cout<<"enter the no bills "<<endl;
        cin>>n;
        cout<<"enter the values of array"<<endl;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            prod=prod*a[i];
        }
        cout<<"the product of the bills is "<<prod<<endl;
        for(i=1;i<=prod;i++)
        {
            if(prod%i==0)
            {
                sr=sqrt(i);
                if(sr*sr==i)
                {
                    max=i;

                }
            }
        }
        cout<<max;
        prod=1;
    }
    return 0;
}