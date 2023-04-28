#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) 
    {
        int product=1;
        for(int i=0;i<nums.size();i++)
        {
            product*=nums[i];
        }    
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(product/nums[i]);
            
        }
        return ans;
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
    vector<int> ans=productExceptSelf(v);
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;


    return 0;
}