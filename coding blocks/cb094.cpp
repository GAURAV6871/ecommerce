#include<iostream>
#include<cstring>
using namespace std;

bool checkpallindrome(char* str)
{
    int n=strlen(str);
    int j=n-1;
    for(int i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    (str)?true:false;
    if(checkpallindrome(str)==true)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
return 0;
}