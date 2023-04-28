#include<iostream>
#include<vector>
using namespace std;

class MyHashMap {
public:
vector<int> v;
    MyHashMap() 
    {
        
    }
    
    void put(int key, int value) 
    {
        v[key]=value;
    }
    
    int get(int key) 
    {
        return v[key];    
    }
    
    void remove(int key) 
    {
        //v.erase(key);    
    }
};


int main()
{
    MyHashMap m;
    m.put(1,1);
    m.put(2,4);
    m.put(3,9);
    m.put(4,16);
    m.put(5,25);
    m.put(6,36);
    for(int i=1;i<=6;i++)
    {
        cout<<m.get(i)<<" ";
    }
    

return 0;
}