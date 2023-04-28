 //we will make 2 heaps, maxheap and minheap
 //the maxheap will store all the values less then the median
 //the minheap will store all the values greater then the median
 //the top most node of the max heap will have just smaller value than the median and
 //the top most node of the min heap will have just greater value than the median
 //we will also make sure that both the heaps are balanced 
 //the median will come out to be the average of top most values of these two heaps
 #include<iostream>
 #include<queue>
 #include<vector>
 using namespace std;

int main()
{
    int data;
    cin>>data;

    float median=data;
    cout<<median<<" ";
    
    priority_queue<int> leftmaxheap;
    leftmaxheap.push(data);
    priority_queue < int, vector<int>, greater<int> > rightminheap;
    while(true)
    {
        cin>>data;
        if(data==-1)
        {
            break;
        }
        if(data<median)
        {
            //insert the data in the leftmaxheap
            if(leftmaxheap.size()>rightminheap.size())
            {
                rightminheap.push(leftmaxheap.top());
                leftmaxheap.pop();

                leftmaxheap.push(data);
                median=(leftmaxheap.top()+rightminheap.top())/2.0;
            }
            else if(leftmaxheap.size()<rightminheap.size())
            {
                leftmaxheap.push(data);
                median=(leftmaxheap.top()+rightminheap.top())/2.0;

            }
            else
            {
                leftmaxheap.push(data);
                median=leftmaxheap.top();   
            }
            
        }
        else
        {
            //insert the data in the rightminheap
            if(rightminheap.size()>leftmaxheap.size())
            {
                leftmaxheap.push(rightminheap.top());
                rightminheap.pop();

                rightminheap.push(data);
                median=(leftmaxheap.top()+rightminheap.top())/2.0;
            }
            else if(rightminheap.size()<leftmaxheap.size())
            {
                rightminheap.push(data);
                median=(leftmaxheap.top()+rightminheap.top())/2.0;

            }
            else
            {
                rightminheap.push(data);
                median=rightminheap.top();   
            }
        }
        cout<<median<<" ";
    }
    
}