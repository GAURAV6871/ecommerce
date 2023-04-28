#include<iostream>
#include<stack>
#include<forward_list>

using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
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

	    for(int i=n-1; i>=0; i--) 
        {

		    while(!s.empty() and s.top() < A[i]) 
            {
			    s.pop();
		    }

		    if(s.empty()) 
            {
			    fw.push_front(-1);
			    // cout << -1 << " ";
		    } 
            else 
            {
			    fw.push_front(s.top());
			    // cout << s.top() << " ";
		    }

		    s.push(A[i]);

	    }
        int i=0;
	    for(int ans : fw) 
        {
		    cout << A[i]<<","<<ans << " "<<endl;
            i++;
	    }
        //cout << endl;
    }
	return 0;
}