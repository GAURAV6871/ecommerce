#include<iostream>
#include<vector>
using namespace std;

void nextgreaterelement(vector<int> v)
{
    vector<int> ans;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[j]>v[i])
            {
                ans.push_back(v[j]);
            }
            if(j==n-1)
            {
                
            }
        }
    }
}

int main()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    nextgreaterelement(v);
return 0;
}