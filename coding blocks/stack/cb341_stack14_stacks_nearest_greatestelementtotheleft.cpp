#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    stack<int> s;

    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top()<=a[i])
        {
            s.pop();
        }
        if(s.empty()) 
        {
			cout << -1 << " ";
		} 
        else 
        {
			cout << s.top() << " ";
		}
        s.push(a[i]);
    }
    cout<<endl;
return 0;
}