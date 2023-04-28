#include<iostream>
using namespace std;

void overrightstring(char* str,char* str1)
{
    for(int i=0,j=0;j<=strlen(str1);i++,j++)
    {
        str[i]=str1[j];
    }
    cout<<str<<endl;
}

int main()
{
    char str[1000],str1[1000];
    cin.getline(str,1000);
    cin.getline(str1,1000);
    overrightstring(str,str1);
return 0;
}