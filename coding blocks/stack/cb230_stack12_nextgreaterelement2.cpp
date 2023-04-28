#include<iostream>
#include<stack>
#include<forward_list>

using namespace std;

int main() 
{
	int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

	stack<int> s;
	forward_list<int> fw;

	for(int i=0; i<=n-1; i++) {

		while(!s.empty() and s.top() < A[i]) {
			s.pop();
		}

		if(s.empty()) {
			fw.push_front(-1);
			// cout << -1 << " ";
		} else {
			fw.push_front(s.top());
			// cout << s.top() << " ";
		}

		s.push(A[i]);

	}

	for(int ans : fw) {
		cout << ans << " ";
	}

	cout << endl;

	return 0;
}