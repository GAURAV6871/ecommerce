#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
vector<int> findDisappearedNumbers(vector<int>& nums) 
{
    vector<int> missing;
    sort(nums.begin(), nums.end());
    
    int low=1;
    int high=nums.size();
    
    for(int i=low; i<=high;i++)
    {
        int flag=1;
        for(int j=0;j<nums.size();j++)
        {
            
            if(nums[j]==i)
            {
                flag=0;
                continue;
            }
        }
        if(flag==1)
        {
            missing.push_back(i);
        }
    }
    return missing;
 
}


int main()
{
    vector<int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    vector<int> missing=findDisappearedNumbers(v);
    /*for(int i=0;i<missing.size();i++)
    {
        cout<<missing[i]<<" ";
    }
    cout<<endl;*/

return 0;
}