        //INCOMPLETE CODE

#include<iostream>
#include<unordered_map>

using namespace std;

class node {

	public :

		char ch;
		bool terminal;
		int freq;
		unordered_map<char, node*> childMap;

		node(char ch) {
			this->ch = ch;
			this->terminal = false;
			this->freq = 0;
		}

};

class trie {
	node* root;
    int count;
	public :

		trie() {
			root = new node('#');
		}

		void insert(string str) {
			node* cur = root;
			for(char ch : str) {
				if(cur->childMap.find(ch) == cur->childMap.end()) {
					node* n = new node(ch);
					cur->childMap[ch] = n;
				}
				cur = cur->childMap[ch];
				cur->freq += 1;
			}
			cur->terminal = true;
            count++;
		}
        string longestcommonprefix()
        {
            node* cur=root;
            string prefix="";
            while(cur->freq==count)
            {
                if(cur->ch!='#'prefix+=cur->ch;
                if(cur->childMap.size()==0)
                {
                    break;
                }
                cur=*(cur->chinldMap.begin()).second;
            }
            return prefix;
        }

		
};


int main() {

	string words[] = {"flow", "flyes", "floor"};
    
    int n=3;
	trie t;
	for(string word : words) 
    {
		t.insert(word);
	}

	for(string word : words) 
    {
		cout << t.uniquePrefix(word,3) << endl;
	}
    cout<<t.longestcommonprefix()<<endl;
    
  
	return 0;
}