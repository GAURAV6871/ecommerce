#include<iostream>
#include<vector>
using namespace std;
void reverseString(vector<char>& s) 
    {
        for(int i=0;i<(s.size()-1)/2;i++) 
        {
            swap(s[i],s[s.size()-i]);
        } 
        for(int i=0;i<s.size();i++) 
        {
            cout<<s[i]<<" ";
            //swap(s[i],s[s.size()-i]);
        }  
        cout<<endl; 

    }

int main()
{
    vector<char> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char ch;
        cin>>ch;
        s.push_back(ch);
    }
    reverseString(s);

    

return 0;
}