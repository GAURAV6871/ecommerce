#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"\nenter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }   
            maxsum=max(sum, maxsum);
        }
    }
    cout<<maxsum<<endl;
return 0;
}    
