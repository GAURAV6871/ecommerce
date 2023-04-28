#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    
    int p=m+n;
    vector<int> nums3(p);
    int i=0,j=0,k=0;
        
    while(i<m)
    {
        nums3[k]=nums1[i];
        k++;
        i++;
    }
    
    while(j<n)
    {
        nums3[k]=nums2[j];
        k++;
        j++;
    }

    sort(nums3.begin(), nums3.end());
    for(int i=0;i<nums3.size();i++)
    {
        cout<<nums3[i]<<" ";
    }
}
int main()
{
    int m,n;
    
    vector<int> nums1;
    vector<int> nums2;
    
    cin>>m;
    int y;
    for(int i=0;i<m;i++)
    {
        cin>>y;
        nums1.push_back(y);
    }
    for(int i=0;i<m;i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;


    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        nums2.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        cout<<nums2[i]<<" ";
    }
    cout<<endl;



    merge(nums1,m,nums2,n);
return 0;
}