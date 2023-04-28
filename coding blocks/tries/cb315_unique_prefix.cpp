 //UNIQUE PREFIX
 //Given an array of strings design an algorithms to find prefix string for each string in the given array. if there is  no unique prefix return empty string  

 //LOGIC: Count no of occurences of each ch in all the words combined 

 #include<iostream>
 #include<unordered_map>

 using namespace std;

 class node
{
    public:
    char ch;
    bool terminal;
    unordered_map<char, node*> childmap;
    int freq;
    
   
    node(char ch)
    {
        this->ch=ch;
        this->terminal=false;
        this->freq=0;
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
            cur->freq+=1;
       }
        cur->terminal=true;
    }


    string uniqueprefix(string str) 
    {
			node* cur = root;
			string prefix = "";
			for(char ch : str) 
            {
				cur = cur->childmap[ch];
				prefix += ch;
				if(cur->freq == 1) 
                {
					return prefix;
				}
			}

			return cur->freq == 1 ? prefix : "";
		}
};
 

int main()
{
    string words[] = {"code", "coder", "coding", "new", "neon"};

	trie t;
	for(string word : words) 
    {
		t.insert(word);
	}

	for(string word : words) 
    {
		cout << t.uniqueprefix(word)<<endl;
	}
  
	return 0;
}