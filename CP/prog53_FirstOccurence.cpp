#include<iostream>
using namespace std;

int strStr(string haystack, string needle) 
{
    int start;
    int n=haystack.size();
    int m=needle.size();
    int flag=0;
    for(int i=0;i<n;i++)
    {
        start=i;
        for(int j=0;j<m;j++)
        {
            
            if(needle[j]!=haystack[start])
            {
                //cout<<start<<" "<<needle[j]<<" "<<haystack[start]<<endl;
                flag=0;
                break;
            }
            else
            {
                start++;
                flag=1;
            }
        }
        if(flag==1)
            return start-m;
    }        
    return -1;  
}

int main()
{
    string needle;
    string haystack;
    cin>>haystack;cin>>needle;
    cout<<strStr(haystack,needle);
return 0;
}