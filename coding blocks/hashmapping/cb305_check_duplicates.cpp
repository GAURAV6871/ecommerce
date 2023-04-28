//given a array of n integer values, design an algorithm to check if there exists a duplicate value in the
//given array or not
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;



int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    unordered_set<int> seen; // to track distinct elements seen so far
    int i;
    for(i=0;i<v.size();i++)
    {
        if(seen.find(v[i])!=seen.end())
        {
            cout<<"true"<<endl;
            break;
            //return true;
        }
        seen.insert(v[i]);
    }
    if(i==v.size())
    {
        cout<<"false"<<endl;
    }
    
return 0;
}