#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[1000];
    cin.getline(str, 1000);
    /*for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }*/
    int j=strlen(str)-1;
    for(int i=0; i<j;i++,j--)
    {
        swap(str[i],str[j]);
    }
    cout<<str;
return 0;
}