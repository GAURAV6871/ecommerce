#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int lengthoflongestpalindrome(string str)
{
    unordered_set<char> seen;
    int count=0;
    for(char ch:str)
    {
        if(seen.find(ch)!=seen.end())
        {
            seen.erase(ch);
            count+=2;
        }
        else
        {
            seen.insert(ch);
        }
    }
    seen.empty()?count:
                 count++; 

    return count;
}

int main()
{
    string str= "abccccdd";

    cout<<lengthoflongestpalindrome(str);
return 0;
}