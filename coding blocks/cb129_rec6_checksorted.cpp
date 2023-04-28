#include<iostream>
using namespace std;
//1 2 3 4 6
bool check_sorted(int a[10],int n)
{
    
    if(a[n-1]>a[n]  || n==0)
    {
        return false;
    }

    check_sorted(a,n-1);
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<check_sorted(a,n)<<endl;
return 0;
}