#include<iostream>
#include<vector>
using namespace std;

bool mycompare(pair<int,int> p1; pair<int,int> p2 )
{
    return p1.first<p2.first;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector <pair<int,int>> v;
    for(int i=0;i<v.size;i++)
    {
       v.push_back(makepair(a[i],i))
    }

    sort(v.begin(),v.end(), mycompare());
    for(int i=0;i<v.size;i++)
    {

    }

return 0;
}