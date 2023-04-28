#include<iostream>
#include<algorithm>
using namespace std;

struct Pair
{
    int min;
    int max;
};

Pair findmixmax(int a[], int n)
{
    Pair minmax;
    if(n==1)
    {
        minmax.min=a[0];
        minmax.max=a[0];
        return minmax;
    }
    if(a[0]>a[1])
    {
        minmax.max=a[1];
        minmax.min=a[0];
    }
    else
    {
        minmax.max=a[0];
        minmax.min=a[1];
    }
    
    for(int i=2;i<n;i++)
    {
        if(a[i]<=minmax.min)
        {
            minmax.min=a[i];
        }
        if(a[i]>=minmax.max)
        {
            minmax.max=a[i];
        }   
    }
    return minmax;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Pair minmax=findmixmax(a,n);
    cout<<"Minimum: "<<minmax.min<<endl;
    cout<<"Maximum: "<<minmax.max;

return 0;
}