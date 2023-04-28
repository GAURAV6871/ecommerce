#include<iostream>
#include<algorithm>
using namespace std;

int main()
{  
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0;i<n-1;i++)
    {
        int temp=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==temp)
            {
                a[j]=-1;
                a[i]=-1;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {
            count++;
        }
    }

    int j;
    for(int i=0;i<n;i++)
    {
        if(a[i]==-1)
        {   
            j=i;
            while(a[j]==-1)
            {
                j++;
            }
            swap(a[i],a[j]);
        }
    }

    
    for(int i=0;i<count;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


return 0;
}