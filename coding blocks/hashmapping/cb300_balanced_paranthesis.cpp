#include <iostream>
#include<vector>
#include<string>
using namespace std;
 
void generateParenthesis(int left, int right, string &s, vector<string> &answer) {
        // terminate
        if (left == 0 && right == 0) {
            answer.push_back(s);
        }
 
        if (left > right || left < 0 || right < 0) {
            // wrong
            return;
        }
 
        s.push_back('(');
        generateParenthesis(left - 1, right, s, answer);
        s.pop_back();
 
        s.push_back(')');
        generateParenthesis(left, right - 1, s, answer);
        s.pop_back();
    }
 
int main()
{
    int n ;
    cin>>n;
    // vector ans is created to store all the possible valid
    // combinations of the parentheses.
    vector<string> ans;
    string s;
    // initially we are passing the counts of open and close
    // as 0, and the string s as an empty string.
    generateParenthesis(n, n, s, ans);
    // Now, here we print out all the combinations.
    for (auto k : ans) {
        cout << k << endl;
    }
    return 0;
}