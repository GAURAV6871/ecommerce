#include <iostream>
#include<stack>
using namespace std;
 
// This function return the sorted stack
stack<int> sortStack(stack<int> &input)
{
    stack<int> tempStack;
 
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
 
        // while temporary stack is not empty and top
        // of stack is greater than temp
        while (!tempStack.empty() && tempStack.top() < tmp)
        {
            // pop from temporary stack and push
            // it to the input stack
            input.push(tempStack.top());
            tempStack.pop();
        }
 
        // push temp in temporary of stack
        tempStack.push(tmp);
    }
 
    return tempStack;
}
 
// main function
int main()
{
    stack<int> s;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.push(a[i]);
    }
 
    // This is the temporary stack
    stack<int> tempStack = sortStack(s);
    //cout << "Sorted numbers are:\n";
 
    while (!tempStack.empty())
    {
        cout << tempStack.top()<< " ";
        tempStack.pop();
    }
    return 0;
}