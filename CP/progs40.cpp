#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    /*for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }*/
    //cout<<endl;
    for(int i=0;i<nums.size();)
    {
        //cout<<i<<endl;
        if(i==nums.size()-1)
        {
            return nums[i];
        }
        if(nums[i]==nums[i+1])
        {
            i+=2;
            continue;
        } 
        if(nums[i]!=nums[i+1] )
        {
            //cout<<nums[i];
            return nums[i];
        }
           
    }    
    return 0;
}
int main()
{
    vector<int> prices;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        prices.push_back(x);
    }
    
    cout<<singleNumber(prices)<<endl;
return 0;
}