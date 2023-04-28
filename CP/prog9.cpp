#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <string> s={"stupid", "shit", "bitch", "dog", "shutup", "fuckyou"};

int main()
{
    vector <string> v(10) ;
    string str;
    for(int i=0;i<10;i++)
    {
        getline(cin,str);
        v.push_back(str);
    }
    for(int i=0;i<10;i++)
    {
        cout<<v[i]<<" ";
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<s[i].length();j++)
        {
            if(s[i][j]==v[i][j])
            {
                v[i][j]='*';
            }
        }
    }

return 0;
}