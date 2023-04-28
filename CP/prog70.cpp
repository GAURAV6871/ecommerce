#include<iostream>
#include<vector>
#include<cmath>
#include<map>
using namespace std;
vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> freq(nums.size()+1,-1);
        
        for(int i=0;i<nums.size()+1;i++)
        {
            freq[nums[i]]++;
        }
        vector<int> v;
        for(int i=0;i<nums.size()+1;i++)
        {
            if(freq[i]==1|| freq[i]==-1)
            {
                v.push_back(i);
            }
        }
        return v;
    }



int main()
{
    vector<int> nums;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        nums.push_back(x);
    }
    cout<<findErrorNums(nums);
return 0;
}