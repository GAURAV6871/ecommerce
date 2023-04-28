//GIVEN AN ARRAY OF N INTEGERS AND AN INTEGER K, DESIGN AN ALGORITHM TO CHECK IF THERE EXISTS 2 DISTINCT
//INDICES i,j SUCH THAT i!=j AND a[i]==a[j] and abs(i-j)<=2

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


bool checkduplicate(vector<int> v, int k)
{
    unordered_map<int, int> indexmap;
    for(int i=0;i<v.size();i++)
    {
        if(indexmap.find(v[i])!=indexmap.end())
        {
            int j=indexmap[v[i]];
            if(i-indexmap[v[i]]<=k)
            {
                return true;
            }
        }
        indexmap[v[i]]=i;
    }
    return false;
}


int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    int k=3;

    checkduplicate(v,k)?cout<<"true"<<endl:
                        cout<<"false"<<endl;
return 0;
}