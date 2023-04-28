#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[1000];
    cin.getline(str, 1000);
    char rev[1000];
    int j=0
    for(int i=strlen(str);i>=0;i--)
    {
        rev[j]=str[i];
    }
    for(int i=0;i!='\0';i++)
    {
        str[i]=rev[i];
    }
    cout<<str;
    return 0;
}    
    
    
