#include<iostream>
#include<vector>
#include<map>
using namespace std;
int distributeCandies(vector<int>& c) 
    {
        map<int, int> mp;
        for(int i=0;i<c.size();i++)
        {
            mp[c[i]]++;
        } 
        if(mp.size() > c.size()/2)
        {
            return c.size()/2;
        }
        return mp.size();   
        
    }
int main()
{
    vector<int> v;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<distributeCandies(v);
return 0;
}