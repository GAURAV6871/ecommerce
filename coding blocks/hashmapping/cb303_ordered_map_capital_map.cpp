// ordered mapping between name of the country and their capital
#include<iostream>
#include<map>
using namespace std;



int main()
{
    // build an unordered map using default constructor
    map<string, string> capitalmap;      // whenever we make an unordered map we have to define
                                                   // the data type of key and value....here both of them 
                                                   // strings
    capitalmap.insert(make_pair("India", "New Delhi"));
    capitalmap.insert(make_pair("USA", "washington"));
    //capitalmap.insert({"India", "New Delhi"}); 

    cout<<"size: "<<capitalmap.size()<<endl;

    //using []
    capitalmap["japan"]="tokyo";   //ye table me dhundhega japan agr usko mil jata haii to theek hai ye use return kar degaa nhi to 
                                   //ye japan ko insert kregaa or usme tokyo assign kar dega 
    
    cout<<"size: "<<capitalmap.size()<<endl;


    //using iterator
    for(auto it=capitalmap.begin();it!=capitalmap.end();it++)
    {
        pair <string, string> p=*it;
        cout<<"("<<p.first<<", "<<p.second<<")"<<endl;
    }
    cout<<endl;


    //using for each loop
    for(pair<string,string>p:capitalmap)   //for(auto p: capitalmap)
    {
        cout<<"("<<p.first<<", "<<p.second<<")"<<endl;
    }
    cout<<endl;



    for(int i=0;i<capitalmap.bucket_count();i++)
    {
        cout<<i<<" : ";
        for(auto it=capitalmap.begin(i),end=capitalmap.end(i);it!=end;it++)
        {
            cout<<"("<<it->first<<", "<<it->second<<")";
        }
        cout<<endl;
    }
    cout<<endl;


    //if we want to update the value of a key then use the following syntax
    capitalmap["India"]="New Delhi";
    for(int i=0;i<capitalmap.bucket_count();i++)
    {
        cout<<i<<" : ";
        for(auto it=capitalmap.begin(i),end=capitalmap.end(i);it!=end;it++)
        {
            cout<<"("<<it->first<<", "<<it->second<<")";
        }
        cout<<endl;
    }


    //LOOKUPS
    //using unordered_map::find
    string key="India";
    if(capitalmap.find(key)!=capitalmap.end())
    {
        cout<<"("<<key<<", "<<capitalmap[key]<<")"<<endl;
    }
    else
    {
        cout<<key<<" is not found"<<endl;
    }

    //using unordered_map::count
    if(capitalmap.count(key))
    {
        cout<<"("<<key<<", "<<capitalmap[key]<<")"<<endl;
    }
    else
    {
        cout<<key<<" is not found"<<endl;
    }

    //DELETION using unordered_map::erase
    capitalmap.erase("japan");
    string key1="japan";
    if(capitalmap.count(key1))
    {
        cout<<"("<<key1<<", "<<capitalmap[key1]<<")"<<endl;
    }
    else
    {
        cout<<key1<<" is not found"<<endl;
    }
    for(int i=0;i<capitalmap.bucket_count();i++)
    {
        cout<<i<<" : ";
        for(auto it=capitalmap.begin(i),end=capitalmap.end(i);it!=end;it++)
        {
            cout<<"("<<it->first<<", "<<it->second<<")";
        }
        cout<<endl;
    }

    //CLEARING THE HASHMAP
    capitalmap.clear();
    cout<<"size "<<capitalmap.size()<<endl;
    
    
    return 0;

}