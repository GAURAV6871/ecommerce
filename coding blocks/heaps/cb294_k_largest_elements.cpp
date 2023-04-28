// given an array of n integers & a positive no k, design an algorithm to find the k largest elements in the array
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin>>n;
    int data;
    for (int i=0;i<n;i++)
    {
        cin>>data;
        v.push_back(data);
    }
    int k;
    cin>>k;
    priority_queue<int> maxheap(v.begin(), v.end());
    while(maxheap.size()>k)
    {
        cout<<maxheap.top()<<" ";
        maxheap.pop();
    }
    cout<<endl;
    return 0;

}