#include<iostream>
#include<string>
#include<queue>
using namespace std;
void nonrepeating(string s)
{
    queue<char>q;
    int freq[26]={};
    for(int i=0;s[i]!='\0';i++)
    {
        freq[s[i]-'a']++;
        if(freq[s[i]-'a']==1)
        {
            q.push(s[i]);
        }
        while(!q.empty() && freq[q.front()-'a']>1)
        {
            q.pop();
        }
    }
        if(q.empty())
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<q.front()<<endl;
        }
    return;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        nonrepeating(s);
    }
return 0;
}