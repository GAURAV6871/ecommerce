#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    int find; 
    getline(cin,s1);
    cout<<"displaying the whole string"<<endl<<s1<<endl;
    find=s1.find("bhar");
    cout<<find<<endl;
return 0;
}    