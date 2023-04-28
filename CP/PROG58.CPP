#include<iostream>
using namespace std;

char findTheDifference(string s, string t) 
{
    int sum1=0;
    for (char c : s) 
    {
        sum1 += (int) c;
    }
    int sum2=0;
    for(char c: t)
    {
        sum2+=(int)c;
    }
    int diff=sum2-sum1;
    return diff;
    
}
int main()
{
    string s;
    string t;
    getline(cin, s);
    getline(cin, t);
    cout<<findTheDifference(s,t)<<endl;

return 0;
}