#include<iostream>
using namespace std;


void readstring(char* str4)
{
    char ch;
    int i=0;
    while(true)
    {
        ch=cin.get();
        if(ch=='\n')
        {
            break;
        }
        str4[i]=ch;
        i++;
    }
    str4[i]='\0';
    cout<<str4<<endl;
}
int main()
{
    char str[]={'a','b','c','\0'};
    cout<<str<<endl;
    
    char str2[]="hello";
    int count=0;
    cout<<str2<<endl;
    for(int i=0;str2[i]!='\0';i++)
    {
        count++;
    }
    cout<<count<<endl;
    char str3[100];
    cin>>str3;
    cout<<"   "<<str3<<endl;

    char str4[100];
    readstring(str4);

    char str5[100];
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    cin.getline(str5, n, '8');
    cout<<str5<<endl;
    
return 0;
}