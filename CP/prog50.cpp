#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &num,int target)
{
    // Complete the function
    vector<int> v;
    for(int i=0;i<num.size()-1;i++)
    {
        for(int j=i+1;j<num.size();j++)
        {
            if(num[i]+num[j]==target)
            {
                v.push_back(i);
                v.push_back(j);
                return v;
            }
        }
    }
    return v;
}
int main(){
    int n; cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int k; cin>>k;
        arr.push_back(k);
    }
    int target; cin>>target;
    vector<int> res=twoSum(arr,target);
    if(res.size()>0)
    {
        for(int i=0;i<2;i++)
            cout<<res[i]<<" ";
    }
    else
        cout<<"-1"<<endl;
}