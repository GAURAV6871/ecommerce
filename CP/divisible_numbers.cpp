#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x;
    //cout<<"a: "<<a<<endl;
    for(x=a+1;x<=c;x++)
    {
       //cout<<"x: "<<x<<endl;
        int y=1;
        if(x%(a*b)==0)
        {
            y=x/(a*b);
            if(y>b && y<=d)
            {
                cout<<x<<" "<<y<<endl;
                break;
            }
        }
        
    }
    
return 0;
}