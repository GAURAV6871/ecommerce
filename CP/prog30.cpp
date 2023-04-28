#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }

    int val;
    cin>>val;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==val)
        {
            nums[i]=-1;
        }
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==-1)
        {
            count++;
        }
    }
    cout<<n-count<<endl;
    return 0;
}