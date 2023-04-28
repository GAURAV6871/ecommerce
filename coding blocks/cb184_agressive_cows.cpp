#include<iostream>
#include<algorithm>
using namespace std;

int largestmindist(int n,int c,int *pos)
{
    int s,e;
    s=INT_MAX;
    e=pos[n-1]-pos[0];

    for(int i=1;i<n;i++)
    {
        
    }
}

int main()
{
    int n,c;
    cin>n>>c;
    int* pos= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>pos[i];
    }
    cout<<largestmindist(n,c,pos);
return 0;
}