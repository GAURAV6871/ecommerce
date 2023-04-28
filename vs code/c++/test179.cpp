#include<iostream>
using namespace std;

int substr(string s2,string s1)
{
    int count=0,i=0;
    for(i=0;i<s1.length();i++)
    {
        if(count==s2.length())
        {
            break;
        }
        if(s2[count]==s1[i])
        {
            count++;
        }
        else
        {
            if(count>0)
            {
                i-=count;
            }
            count=0;
        }
    }
    return count<s2.length()? -1 : i-count;
}



int main()
{
    string s1="geeksfffffoorrfoorforgeeks";
    string s2="for";
    cout<<substr(s2,s1)<<endl;
return 0;
}