#include<iostream>
#include<map>
#include<vector>
using namespace std;


bool containsDuplicate(vector<int>& nums) 
{
    map<int , int> mp;
    for(int i:nums)
    {
        mp[i]++;
    }
    for(auto it: mp)
    {
        if(it.second>1)
        {
            return false;
        }
            
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<containsDuplicate(nums)<<endl;
return 0;
}