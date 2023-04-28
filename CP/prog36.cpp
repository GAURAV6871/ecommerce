#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;  cin>>x;
        v.push_back(x);
    }
    

    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[j]==v[i])
            {
                v[j]=-1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=-1)
        {
            k++;
        }
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++)
    {
        if(v[i]==-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(v[j]!=-1)
                {
                    swap(v[i],v[j]);
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;



return 0;
}