#include<iostream>
#include<unordered_map>
using namespace std;


class node
{
    public:
    char ch;
    bool terminal;
    unordered_map<char, node*> childmap;
    
   
    node(char ch)
    {
        this->ch=ch;
        this->terminal=false;
    }
};


class trie
{
    node* root;

    public:

    trie()
    {
        root= new node('\0');
        
    }

    void insert(string str)
    {
        node* cur=root;   //start traversing the tree from the root node
        for(char ch: str )     //we will iterate over all the characters in the word 
        {
            if(cur->childmap.find(ch)==cur->childmap.end()) //agar hum end tak puhuch gye hain or fr bhi hume nhi mila haii
            {
                node* n=new node(ch);
                cur->childmap[ch]=n;
            }
            cur=cur->childmap[ch];  //agar hume ch mil gya hai to hum next pe chale jayenge
       }
        cur->terminal=true;
    }


    bool search(string str)
    {
        node* cur=root;
        for(char ch: str)
        {
            if(cur->childmap.find(ch)==cur->childmap.end())  //if any of the character is not found we will return false
            {
                return false;
            }
                cur=cur->childmap[ch];
        }
        return cur->terminal;   //this will return true if the end node is terminal and will return false if end node is not terminal
    }
};
  

int main()
{
    trie t;
    string words[]={"code", "coder", "coding", "block", "blocks" , "news"};
    char w[10];
    for(string word : words)
    {
        t.insert(word);
    }
    string queries[]={"code", "coding", "blocked", "block" , "news", "new"};


    for(string query: queries)
    {
        t.search(query) ? cout<<query<<" is present"<<endl
                        : cout<<query<<" is absent"<<endl;
    }
return 0;
}