#include<iostream>
using namespace std;

int main()
{
    int count=0,x=0,y=0,i;
    char ch;
    while(true)
    {
        ch=cin.get();
        if(ch=='\n')
        {
            break;
        }
        if(ch=='N')
        {
            y+=1;
        }
        else if(ch=='S')
        {
            y-=1;
        }
        else if(ch=='E')
        {
            x+=1;
        }
        else if(ch=='W')
        {
            x-=1;
        }
    }
    cout<<"coordinates: "<<"("<<x<<","<<y<<")"<<endl;
    if(x>0 && y>=0)
    {
        for(i=1;i<=x;i++)
        {
            cout<<"E";
        }
        for(i=1;i<=y;i++)
        {
            cout<<"N";
        }
    }
    else if(x<0 && y>0)
    {
        for(i=1;i<=x;i++)
        {
            cout<<"N";
        }
        for(i=1;i<=y;i++)
        {
            cout<<"W";
        }
    }
    else if(x>0 && y<0)
    {
        for(i=1;i<=x;i++)
        {
            cout<<"E";
        }
        for(i=1;i<=y;i++)
        {
            cout<<"S";
        }
    }
    else if(x<0 && y<0)
    {
        for(i=1;i<=x;i++)
        {
            cout<<"S";
        }
        for(i=1;i<=y;i++)
        {
            cout<<"W";
        }
    }   
    cout<<endl;
return 0;
}