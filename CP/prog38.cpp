#include<iostream>
#include<vector>
using namespace std;

void plusOne(vector<int>& v) 
{
    int n=v.size();
    for(int i=n-1;i>=0;i--)
        {
           if(i==n-1)
           {
               v[i]++;
           }
           if(v[i]==10)
           {
                v[i]=0;
               if(i!=0)
               {
                   v[i--]++;
               }
                else
                {
                    v.push_back(0);
                    v[i]=1;
                }
            }
               

    } 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }      
    cout<<endl;
}

int main()
{
    int m;
    cin>>m;
    int x;
    vector<int> v;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    plusOne(v);
    
}