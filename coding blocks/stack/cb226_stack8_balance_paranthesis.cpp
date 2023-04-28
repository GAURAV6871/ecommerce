#include<iostream>
#include<stack>
using namespace std;

int isbalancedstr(string str)
{
    stack<char> s;
    for(char ch:str)
    {
        switch(ch)
        {
            case '(':
            case '{':
            case '[':s.push(ch); 
                     break;
            case ')' : if(!s.empty() && s.top() == '(') {s.pop();} else {return false;} break;
			case '}' : if(!s.empty() && s.top() == '{') {s.pop();} else {return false;} break;
			case ']' : if(!s.empty() && s.top() == '[') {s.pop();} else {return false;} break;
		}     
        
    }
    return s.empty();
}

int main()
{
    
    string s;
    cin>>s;
    isbalancedstr(s) ? cout<<"string is balanced"<<endl
                     : cout<<"string is not balanced";
return 0;
}