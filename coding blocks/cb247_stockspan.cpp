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

    stack<<int,int>> s;

    for(int i=0;i<n;i++)
    {
        while(!s.empty() && s.top().second<a[i])
        {
            s.pop();
        }
        if(s.empty()) 
        {
			cout << (i-(-1)) << " ";
		} 
        else 
        {
			cout <<i- (s.top().first) << " ";
		}
        s.push({i,a[i]});
    }
    cout<<endl;
return 0;
}