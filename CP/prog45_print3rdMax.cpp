#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int thirdmax(vector<int> nums)
{
    sort(nums.begin(), nums.end(), greater<int>());
    if(nums.size()<=2)
    {
        return nums[0];
    } 
    make_heap(nums.begin(),nums.end());
    cout<<nums.front()<<endl;
    pop_heap(nums.begin(),nums.end());
    nums.pop_back();
    cout<<nums.front()<<endl;
    pop_heap(nums.begin(),nums.end());
    nums.pop_back();
    cout<<nums.front()<<endl;
    return 0;
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
    cout<<thirdmax(nums);
return 0;
}