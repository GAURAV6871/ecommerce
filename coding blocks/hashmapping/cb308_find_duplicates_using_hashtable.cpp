// given AN ARRAY CONTAINING N INTEGERSwhere each inteGER is in the range 0,N-1 INCLUSIVE find all DUPLICATES present in the gIVEN ARRAY
//USING HASHMAPING
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


void findduplicates(vector<int> v)
{
    unordered_map <int,int> freqmap;

    for(int i=0;i<v.size();i++)
    {
         freqmap[v[i]]++;
    }
    for(auto p:freqmap)
    {
        if(p.second>1)
        {
            cout<<p.first<<" "<<p.second<<endl;
        }    
    }
}


int main()
{
    vector<int> v(5);
    for(int i=0;i<5;i++)
    {
        cin>>v[i];
    }
    findduplicates(v);
    
return 0;
}
