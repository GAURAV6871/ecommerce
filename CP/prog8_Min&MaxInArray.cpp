#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a);
    cout<<"Minimum: "<<a[0];
    cout<<"Maximum: "<<a[n-1];

return 0;
}