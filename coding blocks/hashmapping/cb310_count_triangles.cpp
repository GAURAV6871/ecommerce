#include<iostream>
#include<vector>
#include<unordered_map>
#include<utility>
using namespace std;



class point
{
    public: 
        int x;
        int y;

        point(int x, int y)
        {
            this->x=x;
            this->y=y;

        }
};

int main()
{
    int x,y;
    vector<point> points;
    int n;
    cin>>n;
    pair<int,int> p;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        p=make_pair(x,y);
        points.push_back(p);
    }
}


