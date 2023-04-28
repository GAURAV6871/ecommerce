#include<iostream>
using namespace std;
bool is_cb(long long sub)
{
    //to check whether given no. is cb no. or not
    if(sub==0||sub==1)
    {
        return false;
    }
    int x[10] = {2,3,5,7,11,13,17,19,23,29};
    int n=sizeof(x)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(sub==x[i])
        {
            return true;
        }
    }
        for(int i=0;i<n;i++)
        {
            if(sub%x[i]==0)
            {
                return false;
            }
        }
 return true;
}
bool is_valid(bool visited[17],string sub,int start,int end)
{
    //uss substring ke corresponding ka start and end
    for(int i=start;i<end;i++) 
    {
        //traversing the substring
        if(visited[i]) 
        {
            //string ke indices and and visited ke indices identical hai
            //that means substring ke indices and and visited ke indices identical hai
            //so visited[i] shows substring ka ith element (and substring is subpart of whole string that means string ke bhi ith element ki hi baat ho rhi hai indirectly )
            return false;
        }
    }
return true;
}
int main() 
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool visited[100]={false};
    int count=0;
    for(int len=1;len<=str.length();len++)
    {
        for(int pos=0;pos<=str.length()-len;pos++)
        {
            int end=pos+len;
            string sub=str.substr(pos,len);
            if(is_cb(stoll(sub)) && is_valid(visited,sub,pos,end))
            {
                count++;
                for(int i=pos;i<end;i++)
                {
                    visited[i]=true;
                }
            }
        }
    }
cout<<count;
return 0;
}