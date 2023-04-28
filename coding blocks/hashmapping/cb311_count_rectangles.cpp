 //COUNT RECTANGLES
//FIND TOTAL NO IF AXIS PARALLEL RECTANGLES

#include<iostream>
#include<vector>
#include<set>

using namespace std;


class point
{
    public:
    int x;
    int y;
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void printpoint()
    {
        cout<<"( "<<x<<" , "<<y<<" )"<<endl;
    }
};



class pointcompare
{
    public:
    
        bool operator()(point p1,point p2)
        const{
            if(p1.x==p2.x)
            {
                return p1.y<p2.y;
            }
            return p1.x<p2.x;
        }
};




int main()
{
    vector<point> points{ //point(0,0),
                          //point(0,1),
                          point(1,1),
                          //point(1,0),
                          point(2,1),
                          point(2,2),
                          point(1,2),
                          //point(2,0),
                          point(3,1),
                          point(3,2)};
    //c++ can not hash a class on its own and as sets use hashmaping we can not use unordered set directly we need to make a comparator

    set<point, pointcompare> plane(points.begin(), points.end());    //initialising the set from the begining of the vector till the end
    int count=0;
    int n=points.size();
    for(int i=0;i<n-1;i++)
    {
        point p1=points[i];
        for(int j=i+1;j<n;j++)
        {
            point p2=points[j];   
            if(p1.x!=p2.x && p1.y!=p2.y)
            {
                point p3=point(p1.x,p2.y);
                point p4=point(p2.x,p1.y);
                if(plane.find(p3)!=plane.end()  && pl ane.find(p4)!=plane.end())
                {
                    count++;
                }
            }
        }    
    }
    cout<<count/2<<endl;    //in the case of 4 elements at first we took two pivot elements and then look for p3 and p4 and then
                            //we took the p3 as p1 and p2 as p4 so we are getting double the answer so we will do count/2 

}
