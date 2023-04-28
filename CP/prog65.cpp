#include<iostream>
using namespace std;
bool detectCapitalUse(string word) 
{
    int n=word.size();
    cout<<"the size of the word is: "<<n<<endl;
    int count=0;
    for(int i=0;i<word.size();i++) 
    {
        if(isupper(word[i]))
        {
            count++;
        }
    }   
    cout<<"no of capital letters in the word are: "<< count<<endl;
    if(count==n || count==0)
    {
        return true;
    }
    else if(count==n-1 && isupper(word[0]) && !isupper(word[1]))
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    cout<<detectCapitalUse(s);
return 0;
}