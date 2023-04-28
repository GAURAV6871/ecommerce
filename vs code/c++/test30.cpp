
#include<iostream>
using namespace std;


int main() 
{
    int T,N,a[10],diff[10],max;
    cin>>T;
    cout<<endl;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        cout<<"enter the heights of building"<<endl;
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<N;i++)
        {
            if(a[i+1>a[i]])
            {
                diff[i]=a[i+1]-a[i];
            }
            else
            {
                diff[i]=a[i]-a[i+1];
            }
        }
        for(int i=0;i<N-1;i++)
        {
            max=diff[0];
            if(max<diff[i+1])
            {
                max=diff[i+1];
            }
        }
        cout<<max;
    }
    return 0;
}
