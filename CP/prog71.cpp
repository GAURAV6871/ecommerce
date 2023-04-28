#include<iostream>
#include<vector>
#include<string>
using namespace std;

int calPoints(vector<string>& s) 
{
    vector<int> v;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
            int x=s[i];
            v.push_back(x);
        }
        else if(s[i]=='+')
        {
            int x=v[v.size()-1]+v[v.size()-2];
            v.push_back(x);
        }
        else if(s[i]=='D')
        {
            int x=2*v[v.size()-1];
            v.push_back(x);
        }
        else if(s[i]=='C')
        {
            v.erase(v.end());
        }
    }    

}


int main()
{   
    int n; cin>>n;
    vector<string> os;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

    }

return 0;
}