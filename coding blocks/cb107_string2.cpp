#include<iostream>
using namespace std;

int main()
{
    /*string str("hello world");
    cout<<str.length()<<endl;
    cout<<str.size()<<endl;
    string str1("hello");
    string str2("world");
    str1.append(str2);
    string str3("a");
    string str4("a");
    cout<<str4.compare(str3)<<endl;*/
    //find function
    string str5("helloheworldllo");
    cout<<str5.find("llo")<<endl;
    cout<<str5.rfind("go")<<endl;

    //sub string
    cout<<str5.substr(2,6)<<endl;
    cout<<str5.substr(2)<<endl;
    

return 0;
}