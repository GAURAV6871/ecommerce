#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.size();
    int i,j,count,maxc=-19999999;
    for(i=0;i<l;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(s[j]==s[i])
            {
                count++;
            }
        }
        maxc=max(maxc,count);
    }
    cout<<endl<<maxc<<endl;
return 0;
}    
