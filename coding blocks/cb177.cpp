#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
             if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                }
            }
        }
  }
 int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         int a[10000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
      bubble_sort(a,n);
        int m;
        cin>>m;
        int diff=INT_MAX;
        int no1=0;
        int no2=0;
        int start=0;
        int end=n-1;
        while(start<end)
        {
            if(a[start]+a[end]==m && a[end]-a[start]<diff )
            {
                    diff=a[end]-a[start];
                    no1=a[start];
                    no2=a[end];
                    start++;
                    end--;
            }
            else if(a[start]+a[end]>m)
            {
                end--;
            }
            else
            {
                start++;
            }
        }
        if(no1>no2)
        {
           cout<<"Deepak should buy roses whose prices are "<<no2<<" and "<<no1<<"."<<endl;
        }
        else
        {
            cout<<"Deepak should buy roses whose prices are "<<no1<<" and "<<no2<<"."<<endl;
        }
    }
    return 0;
 }