#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    cout<<"string before erasing"<<endl<<s1<<endl;
    s1.erase(3,3);
    cout<<"string after erasing"<<endl<<s1<<endl;
return 0;
}    


