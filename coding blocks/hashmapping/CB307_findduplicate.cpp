//FIND DUPLICATE 1
// GIVEN AN ARRAY OF N INTEGERS CONTAINING N+1 INTEGERS  WHERE EACH INTEGER IS IN THE RANGE [1,N] 
//INCLUSIVE DESIGN AN ALGORITHM TO FIND DUPLICATE NUMBER GIVEN THAT THERE IS ONLY ONE REPEATED NUMBER
#include<iostream>
#include<vector>
  
using namespace std;



int findduplicate(vector<int> v)
{
    int slow=v[0];
    int fast=v[0];

    while(true)
    {
        slow=v[slow];
        fast=v[v[fast]];
        if(slow==fast)
        {
            break;
        }
    }
    slow=v[0];
    while(slow!=fast)
    {
        slow=v[slow];
        fast=v[fast];
    }
    return slow;
}
  
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);

    cout<<findduplicate(v)<<endl;
return 0;
}
