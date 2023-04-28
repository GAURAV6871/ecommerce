#include<iostream>
using namespace std;



class queue
{
    int* a;
    int n;
    int f;
    int r;
    int count;

    public:
    queue(int n)
    {
        n=n+1;
        a=new int[n];
        this->n=n;
        f=-1;
        r=-1;
        count=0;
    }        

    void push(int val)
    {
        if((r+1)%n==f)      //overflow condition
        {
            cout<<"queue is full"<<endl;
            return;
        }
        
        r=(r+1)%n;
        a[r]=val;
        count++;
    }
    void pop()
    {
        if(f==r)       //underflow condition
        {
            cout<<"queue is empty"<<endl;
            return;
        }
        f=(f+1)%n;
        count--;
    }
    int front()
    {
        return a[(f+1)%n];
    }

    int size()
    {
        return count;
    }
    bool empty()
    {
        return f==r;
    }
    void printqueue()
    {
        for(int i=(f+1)%n;i!=(r+1)%n;i=(i+1)%n)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};




int main()
{
    int n;
    cin>>n;
    queue q(n);
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        q.push(val);
    }
    cout<<endl;
    q.printqueue();
    q.pop();
    cout<<"front: "<<q.front()<<endl;
    cout<<"size: "<<q.size()<<endl;
    q.printqueue();
    q.empty()?cout<<"queue is empty":
              cout<<"queue is not empty";

return 0;
}