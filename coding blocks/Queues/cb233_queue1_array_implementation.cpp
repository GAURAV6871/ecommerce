#include<iostream>
using namespace std;

class queue
{
    int* a;       //internal implementation of queue
    int n;        //represents the size of the queue
    int f;        //front
    int r;        //rear
    int count;
    
    public:

    queue(int n)
    {
        a=new int[n];
        this->n=n;
        f=-1;
        r=-1;
        count=0;
    }
    void push(int val)      //this function pushes the element the the rear
    {
        if(r==n+1)          //overflow condition
        {
            return;
        }
        r=r+1;
        a[r]=val;
        count++;
    }

    void pop()              //this function pops the element the the front
    {
        if(f==r)          //underflow condition
        {
            return;
        }
        f=f+1;
        count--;
    }
    int size()
    {
        return count;
    }
    
    bool empty()
    {
        return f==r;
    }
    int front()
    {
        return a[f+1];
    }

    void traverse()
    {
        if(f==r)
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        int front=f;
        while(front<r)
        {
            cout<<a[front+1]<<" ";
            front=front+1;
        }
        cout<<endl;
    }

};


int main()
{
    queue q(5);
    cout << "size : " << q.size() << endl;
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	q.push(10);
	q.push(20);
	q.push(30);
    q.traverse();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;


    q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;
    q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;
return 0;
}