#include<iostream>
#include<cstring>
using namespace std;

bool checkanagram(char* str,char* str1)
{
    int freq1[26]={};
        for(int i=0;i<strlen(str);i++)
        {
            char ch=str[i];
            int idx=ch-'a';
            freq1[idx]++;
        }
        
        int freq2[26]={};
        for(int i=0;i<strlen(str1);i++)
        {
            char ch=str1[i];
            int idx=ch-'a';
            freq2[idx]++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                return false;
            }
        }
        return true;
}

int main()
{
    char str[1000];
    char str1[1000];
    cin.getline(str,1000);
    cin.getline(str1,1000);
    if(checkanagram(str,str1)==true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    
return 0;
}