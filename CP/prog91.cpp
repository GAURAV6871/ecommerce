#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) 
{
    map<int, int> mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }  
    vector<int> v ;
    for(auto it: mp)
    {
        /*if(k==0)
        {
            return v;
        }
        v.push_back(it.first);
        k--;*/
        cout<<it.first<<" "<<it.second<<endl;
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
    int k ;cin>>k;
    vector<int> result=topKFrequent(v, k) ;
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" "; 
    }
    cout<<endl;

return 0;
}