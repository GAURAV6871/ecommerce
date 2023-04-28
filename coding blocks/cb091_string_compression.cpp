#include<iostream>
#include<cstring>
using namespace std;
void comparison(char*str)
{
    int n=strlen(str);
    int i=0;
    while(str[i]!='\0')
    {
        int count=0;
        char key=str[i];
        while(str[i]==key)
        {
            count++;
            i++;
        }
        if(count==1)
        {
            cout<<key;
        }
        else
        {
            cout<<key<<count;
        }
    }
}
int main()
{
    char str[1000];
    cin.getline(str,1000);
    comparison(str);
}