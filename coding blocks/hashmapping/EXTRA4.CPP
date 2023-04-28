#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int x;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int max_sum=v[0];
    for(int i=1;i<n;i++)
    {
        max_sum=max(max_sum,v[i]);
    }
    cout<<max_sum;
    cout<<INT_MAX;
return 0;
}