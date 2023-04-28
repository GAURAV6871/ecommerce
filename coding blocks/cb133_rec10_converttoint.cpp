#include<iostream>
using namespace std;

int stringtointeger(string str, int n)
{
    if(n==0)
    {
        return 0;
    }
    string subStr=str.substr(0,n-1);
    int integerfrommyfrirnd=stringtointeger(subStr,n-1);
    return integerfrommyfrirnd * 10 +(str[n-1]-'0'); 
}


int main()
{
    string str;
    cin>>str;
    int size=str.size();
    int n=stringtointeger(str,size);
    cout<<n<<endl;
return 0;
}