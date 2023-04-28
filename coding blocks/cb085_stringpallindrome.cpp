#include<iostream>
#include<cstring>
using namespace std;

int checkpallindrome(char* str)
{
    int n=strlen(str);
    int j=n-1;
    for(int i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    checkpallindrome(str)?cout<<"string is pallindrome":cout<<"string is not pallindrome";
return 0;
}