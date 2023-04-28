#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s1,s2;
    int i,j,size;
    cin>>s1;
    size=s1.size();
    for(i=0;i<size/2;i++)
    {
        swap(s1[i], s1[size-i-1]);
    }
    cout<<s1<<endl;

}