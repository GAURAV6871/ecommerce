#include<iostream>
#include<vector>
using namespace std;
int findPoisonedDuration(vector<int>& t, int duration) 
{
    int count=0;
    for(int i=0;i<t.size();i++)
    {
        cout<<count<<endl;
        if(i==t.size()-1)
        {
            count+=duration;
            continue;
        }
        if(t[i+1]-t[i]>duration)
        {
            count+=duration;
        }
        else if(t[i+1]-t[i]<duration)
        {   
            int diff=t[i+1]-t[i];
            count+=diff;
        }
    }
    return count;
}

int main()
{
    vector<int> t;
    int n; cin>>n;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        t.push_back(x);
    }
    int duration;
    cin>>duration;
    cout<<findPoisonedDuration(t,duration);

    
return 0;
}