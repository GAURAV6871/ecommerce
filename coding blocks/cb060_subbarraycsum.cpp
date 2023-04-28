#include<iostream>
using namespace std;

int main()
{
    int a[]={10,-3,12,7,-20};
    int mss=INT_MIN,sum;
    int n=sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            if(sum>mss)
            {
                mss=sum;
            }
        }
    }
    cout<<"maximum sum of the array is "<<mss<<endl;
return 0;
}