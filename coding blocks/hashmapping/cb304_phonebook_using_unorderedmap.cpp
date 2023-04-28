//MAPING BETWEEN PERSON'S NAME AND THEIR PHONE NUMBER USING UNORDERED MAP

#include<iostream>
#include<unordered_map>
#include<vector> 
using namespace std;

int main()
{
    unordered_map<string, vector<string> > phonemap;

    phonemap["gaurav"].push_back("123456");
    phonemap["gaurav"].push_back("23456");
    phonemap["saumya"].push_back("000111");
    phonemap["shivanshu"].push_back("123456");
    phonemap["amit"].push_back("1234");    
    

    for(auto p:phonemap)
    {
        cout<<p.first<<": ";
        for(string num:p.second)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
    
return 0;
}