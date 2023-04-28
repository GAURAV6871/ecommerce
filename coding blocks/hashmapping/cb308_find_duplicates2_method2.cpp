// given AN ARRAY CONTAINING N INTEGERSwhere each inteGER is in the range 0,N-1 INCLUSIVE find all DUPLICATES present in the gIVEN ARRAY

//METHOD 2: USING HASHMAPING
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void findduplicates(vector<int> v)
{
    int n=v.size();
    for(int i=0;i<v.size();i++)
    {
        v[v[i]%n]+=n;

    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]/n>1)
        {
            cout<<i<<endl;
        } 
    }
    cout<<endl;
}


int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    findduplicates(v);
    
return 0;
}
