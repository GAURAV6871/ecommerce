#include<iostream>
using namespace std;

int main()
{
    char str[1000],str1[1000];
    cin.getline(str,1000);
    cin.getline(str1,1000);
    int c=0,c1=0,i;
    if(strlen(str)>strlen(str1))
    {
        cout<<1<<endl;
    }
    else if(strlen(str)<strlen(str1))
    {
        cout<<2<<endl;
    }
    else if(strlen(str)==strlen(str1))
    {
        for(i=0;i<=strlen(str);)
        {
            if(str[i]==str1[i])
            {
                i++;
            }
            else if(str[i]>str1[i])
            { 
                cout<<1<<endl;
                break;
            }
            else
            {
                cout<<2<<endl;
                break;
            }
            
        }
        if(i>strlen(str))
        {
            cout<<"0"<<endl;
        }
    }
return 0;
}