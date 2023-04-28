#include<iostream>
#include<cstring>
using namespace std;

void concatstring(char* str, char* str1)
{
    int i=strlen(str1);
    int j=0;
    while(j<=strlen(str2))
    {
        str[i]=str1[j];
        i++;
        j++;
    }
    cout<<str<<endl;
    strcat(str,str1);
    cout<<str<<endl;
}

int main()
{
    char str[1000],str1[1000];
    cin.getline(str,1000);
    cin.getline(str1,1000);
    concatstring(str,str1);
    return 0;
}    
    