#include<iostream>
using namespace std;

void duplicate(char* a, int len, int i)
{
    //base case
    if(a[i]=='\0')
    {
        cout<<a<<endl;
        return;
    }
    char p;
    p=a[i];
    if(a[i]==p && a[i+1]==p)
    {
        int j=i+1;
        while(a[j]!='\0')
        {
            j++;
        }
        while(j>=i+1)
        {
            a[j+1]=a[j];
            j--;
        }
        a[i+1]='*';
        duplicate(a,len,i+3);
    }
    else
    {
        duplicate(a,len,i+1);
    }
}

int main()
{
    char a[100];
    cin>>a;
    int len=strlen(a);
    cout<<len<<endl;
    duplicate(a,len,0);
return 0;
}