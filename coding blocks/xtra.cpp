#include<iostream>
#include<queue>
using namespace std;

int main()
{
    string str="aabcaba";
    int freq[26]={0};
    priority_queue<pair<char,int> >maxheap;
    for(auto ch : str)
    {
        freq[ch-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        cout<<freq[i]<<" ";
    }
    for(int i=0;i<26;i++)
    {
        if(freq[i]>0)
        {
            
            maxheap.push(make_pair(i+'a',freq[i]));
        }
    }
    while(!maxheap.empty())
    {
        pair<char,int> p=maxheap.top();
        maxheap.pop();
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;

return 0;
}