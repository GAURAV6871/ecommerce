#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) 
{
    int i=nums.size()-1;
    //int temp=nums[i];
    int count=0;
    int prev=nums[i+1];
    while(nums[i]<nums[0])
    {
        if(nums[i]<nums[0])
        {
            count++;
            i--;
        }
        //cout<<"we are currently at: "<<temp<<endl;
        prev=nums[i+1];
        //temp=nums[i];
    }    
    return prev;
}

int main()
{
    int n; cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        nums.push_back(x);
    }
    cout<<findMin(nums)<<endl; 

return 0;
}