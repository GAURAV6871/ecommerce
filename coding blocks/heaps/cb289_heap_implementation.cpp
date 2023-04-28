#include<iostream>
#include<vector>
using namespace std;


class minheap
{
    vector<int> v;

    void heapify(int i)
    {
        int minIdx=i;

        int leftIdx=2*i + 1;
        if(v[leftIdx]<v[minIdx]  && leftIdx<v.size()) 
        {
            minIdx=leftIdx;
        }
        int rightIdx=2*i + 2;
        if(v[rightIdx]<v[minIdx] && rightIdx<v.size())
        {
            minIdx=rightIdx;
        }

        //NO BASE CAE IS REQUIRED BECAUSE IF MIN_IDX ==I THEN OUR BELOW CONDITION
        //WILL NOT BE SATISFIED OR HUM FUNCTION SE BAHAR CHALE JAYENGE

        if(minIdx!=i)
        {
            swap(v[i] , v[minIdx]);
            heapify(minIdx);
        }
        

    }

    public:
    void push(int data)
    {
        v.push_back(data);     //it may violate the heap property
        int childIdx= v.size()-1;
        int parentIdx;
        if(childIdx%2==0)
        {
            parentIdx=childIdx/2-1;
        }
        else
        {
            parentIdx=childIdx/2;
        }

        while(parentIdx>=0 && v[childIdx]< v[parentIdx])
        {
            swap(v[childIdx], v[parentIdx]);
            childIdx=parentIdx;

            if(childIdx%2==0)
            {
                parentIdx=(childIdx/2)-1;
            }
            else
            {
                parentIdx=(childIdx/2);
            }
        }
    }

    void pop() //we have to delete the top/ minimum element
    {
        swap(v[0],v[v.size()-1]);
        v.pop_back();
        heapify(0);
    }

    int top()
    {
        return v[0];
    }

    int size()
    {
        return v.size();
    }
     
    bool empty()
    {
        return v.empty();
    }
};

int main()
{ 
    minheap m;

    m.push(9);
    m.push(7);
    m.push(8);
    m.push(5);
    m.push(4);
    m.push(6);
    m.push(3);
    m.push(2);
    m.push(1);
    cout<<"top: "<<m.top()<<endl;
    m.push(0);
    cout<<"top: "<<m.top()<<endl;
    cout<<"size: "<<m.size()<<endl;
    while(!m.empty())
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    cout<<endl;
    cout<<"size: "<<m.size()<<endl;
return 0;
}