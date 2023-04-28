#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    //cout<<n<<endl;
    char p;
    for(int i=0;i<n-1;)
    {
        if(s[i]==s[i+1])
        {
            int j=i+1;
            while(s[j]!='\0')
            {
                j++;
            }
            while(j>=i+1)
            {
                s[j+1]=s[j];
                j--;
            }
            s[i+1]='*';
            i=i+2;
        }
        else
        {
            i++;
        }
    }
    int size=s.size();
    int i=0;
    cout<<size<<endl;
    while(s[i]!='\0')
    {
        cout<<s[i];
        i++;
    }

return 0;
}