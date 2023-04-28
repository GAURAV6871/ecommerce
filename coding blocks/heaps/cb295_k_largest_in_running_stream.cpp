//WE WILL
#include<iostream>
#include<vector>
#include<queue>

using namespace std;


void printtopk(priority_queue<int ,vector<int>, greater<int> > minheap)
{
    while(!minheap.empty())
    {
        cout<<minheap.top();
        minheap.pop();
    }
    cout<<endl;
}

int main()
{
    vector<int> ropelengths;
    //int n;
    //cin>>n;
    //int data;
    //for(int i=0;i<n;i++)
    //{
      //  cin>>data;
       // ropelengths.push_back(data);
    //}
    priority_queue<int ,vector<int>, greater<int> > minheap;   //pushes all the values of ropelengths in the min heap, 
                                                                                                       //this will save our time and we need not write the for 
                                                                                                       //loop now to push all these values
    int val;
    int k=3;
    //cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>val;
        minheap.push(val);
    }
    while(true)
    {
        cin>>val;
        if(val==0)
        {
            //stream is over
            break;
        }
        if(val==-1)//print the top k elemets
        {
            printtopk(minheap);
        }
        else
        {
            if(val>minheap.top())
            {
                minheap.pop();
                minheap.push(val);
            }
        }
    }
return 0;
}