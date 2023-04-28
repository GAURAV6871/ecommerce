#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
{
    vector<int> nums3;
    int n=nums1.size();
    int m=nums2.size();


    for(int i=0;i<n;i++)
    {
        nums3.push_back(nums1[i]);
    }
    for(int j=0;j<m;j++)
    {
        nums3.push_back(nums2[j]);
    }
    sort(nums3.begin(), nums3.end());
    cout<<"the new vector is"<<endl;
    for(int i=0;i<nums3.size();i++)
    {
        cout<<nums3[i]<<" ";
    }
    cout<<endl;
    int size=nums3.size();
    int p=size/2;
    if(size==1)
    {
        return nums3[0];
    }
    else if(size==2)
    {
        float median= float((nums3[0]+nums3[1])/2.0);
        return median;
    }
    if(p%2==0)
    {
        float median=float((nums3[p]+nums3[p-1])/2.0);
        return median;
    }
    return nums3[p];
}

int main()
{
    vector<int> v1;
    vector<int> v2;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        v1.push_back(x);
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x; cin>>x;
        v2.push_back(x);
    }
    cout<<findMedianSortedArrays(v1,v2);
    
return 0;
}