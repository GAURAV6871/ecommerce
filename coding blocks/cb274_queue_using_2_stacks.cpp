#include<iostream>
#include<stack>
//#include<queue>
using namespace std;


class queue
{
	stack<int> s1;
	stack<int> s2;
	
	public:
	void push(int val)
	{
		if(s1.empty()  && s2.empty())
        {
            s1.push(val);
        }
        else if(s1.empty() && !s2.empty())
        {
            s2.push(val);
        }
        else
        {
            s1.push(val);
        }
	}
    void pop()
    {
        if(s1.empty() && s2.empty())
        {
            return;
        }
        else if(s1.empty() && !s2.empty())
        {
            while(s2.size()>1)
            {
                s1.push(s2.top());
                s2.pop();
            }
            s2.pop();
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }

        }
        else
        {
            while(s1.size()>1)
            {
                s2.push(s1.top());
                s1.pop();
            }
            s1.pop();
            while(s2.size())
            {
                s1.push(s2.top());
                s2.pop();
            }
        }
    }
    int front()
    {
        //transfer all the elements from s1 to s2 and then display the last element
        if(s1.empty() && s2.empty())
        {
            return 0;
        }
        else if(s1.empty() && !s2.empty())
        {
            while(s2.size()>1)
            {
                s1.push(s2.top());
                s2.pop();
            }
            int ans=s2.top();
            s1.push(s2.top());
            s2.pop();
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            return ans;
        }
        else
        {
            while(s1.size()>1)
            {
                s2.push(s1.top());
                s1.pop();
            }
            int ans=s1.top();
            s2.push(ans);
            s1.pop();
            while(s2.size())
            {
                s1.push(s2.top());
                s2.pop();
            }
            return ans;
        }
    }
    bool empty()
    {
        return(s1.empty() && s2.empty());
    }
    int size()
    {
        return max(s1.size(), s2.size());
    }
    void traverse()
    {
        if(s1.empty() && s2.empty())
        {
            return;
        }
        else if(s1.empty() && !s2.empty())
        {
            while(s2.size())
            {
                s1.push(s2.top());
                s2.pop();
            }
            while(s1.size())
            {
                cout<<front();
                s1.pop();
            }
        }
        else
        {
            while(s1.size())
            {
                s2.push(s1.top());
                s1.pop();
            }
            while(s2.size())
            {
                cout<<front();
                s2.pop();
            }
        }
    }

	
};


int main() 
{
	queue q;
    int n;
    cout<<"enter the size of the queue: ";
    cin>>n;
    cout<<endl<<"enter the data for the queue"<<endl;
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        q.push(a[i]);
    }
    cout<<q.front()<<endl;
    //cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    if(q.empty())
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    cout<<"size: "<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    if(q.empty())
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
    
    //cout<<endl<<"the queue should be 1 2 3 4 5 "<<endl;
    //q.traverse();
    /*cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    q.pop();*/

	return 0;
}