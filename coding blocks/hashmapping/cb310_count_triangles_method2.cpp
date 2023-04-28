#include<iostream>
#include<vector>
#include<unordered_map>
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
    vector<point> points={point(1,2),
                          point(2,0),
                          point(2,2),
                          point(2,3),
                          point(4,2)};
    unordered_map<int, int> xfreqmap;
    unordered_map<int, int> yfreqmap;

    for(auto point:points)
    {
        xfreqmap[point.x++];
        yfreqmap[point.y++];
    }
    int count=0;
    for(point pivot:points)
    {
        int a=xfreqmap[pivot.x];
        int b=yfreqmap[pivot.y];

        count+=(a-1)*(b-1);
    }
    cout<<count;
return 0;
}
    
