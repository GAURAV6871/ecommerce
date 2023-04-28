#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) 
    {
        int count=1;
        //sort(nums.begin(),nums.end())
        vector<int> v(nums.size(), 0);
        for(int i=0;i<nums.size();i++)
        {
            v[nums[i]]++;
        }
        int max=INT_MIN;
        int temp;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
            {
                max=v[i];
                temp=i;
            }
        }
        return temp;

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
    
    cout<<majorityElement(prices)<<endl;
return 0;
}