#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1,s2; 
    getline(cin,s1);
    cout<<"displaying the complete string"<<endl<<s1<<endl;
    s2=s1.substr(2,7);
    cout<<"displaying the sub string"<<endl<<s2<<endl;

return 0;
}    