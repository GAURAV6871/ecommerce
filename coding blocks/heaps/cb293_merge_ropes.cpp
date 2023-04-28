#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    vector<int> ropelengths;
    int n;
    cin>>n;
    int data;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        ropelengths.push_back(data);
    }
    priority_queue<int ,vector<int>, greater<int> > minheap(ropelengths.begin(), ropelengths.end());   //pushes all the values of ropelengths in the min heap, 
                                                                                                       //this will save our time and we need not write the for 
                                                                                                       //loop now to push all these values
    int total=0;   //for scoring overall cost
    while(minheap.size()>1)
    {
        int a=minheap.top();
        minheap.pop();
        int b=minheap.top();
        minheap.pop();
        total+= a+b;
        minheap.push(a+b);
    }
    cout<<"minimum cost = "<<total<<endl;
return 0;
}