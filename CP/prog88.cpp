#include<iostream>
#include<vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) 
{
    sort(nums.begin(), nums.end(), greater<int>());
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int x=nums[k-1];
    return x;  
}

int main()
{
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int k; cin>>k;
    cout<<findKthLargest(v, k) ;

return 0;
}