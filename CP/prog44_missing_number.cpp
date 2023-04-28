#include<iostream>
#include<vector>
using namespace std;


int missingNumber(vector<int>& nums) 
{
    int sum=0,sums=0;
    for(int i=0;i<nums.size();i++)
    {
        sum+=nums[i];
    }    
    cout<<sum<<endl;
    //int n=nums.size();
    for(int i=1;i<=nums.size();i++)
    {
        sums+=i;
    }
    cout<<sums<<endl;
    return sums-sum;
}



int main()
{
    vector<int> nums;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<missingNumber(nums)<<endl;
return 0;
}