#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{

    string str;
    getline(cin,str);
    int j=str.size()-1;
    int count=0;
    while(j>=0 && str[j]==' ')
    {
        j--;
    }
    while(j>=0 && str[j]!=' ')
    {
        count++;
        j--;
    }
    cout<<count<<endl;

    

return 0;   
}