#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"the first vector is printed as"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v2(3,50);
    cout<<"the second vector is printed as"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    swap(v,v2);
    cout<<"the vectors are now swaped"<<endl;
    cout<<"now first vector is printed as "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"the second vector is now printed as"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    sort(v2.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
return 0;
}   