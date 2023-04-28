#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s1; 
    getline(cin,s1);
    cout<<"displaying the pre edited string"<<endl<<s1<<endl;
    s1=s1.insert(2,"urav");
    cout<<"displaying the post edited string"<<endl<<s1<<endl;

return 0;
}    