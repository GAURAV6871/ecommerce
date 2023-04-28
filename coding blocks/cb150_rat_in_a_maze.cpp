#include<iostream>
using namespace std;


bool checkpath(char maze[][5], int i,int j)
{
    if(i==0 && j==0)
    {
        return true;
    }
    if(maze[i][j]=='x')
    {
        return false;
    }
    if(i==0)
    {
        return  checkpath(maze,i,j-1);
    }
    if(j==0)
    {
        return checkpath(maze,i-1,j);
    }
    //ask your friend if you can reach i ,jth cell from left
    
    //bool x=checkpath(maze, i-1,j);
    //ask your friend if you can reach i ,jth cell from top
    //bool y=checkpath(maze, i,j-1);
    //return x or y;
    return checkpath(maze, i-1,j) or checkpath(maze, i,j-1);
}

int main()
{   
    char maze[5][5]={"000x",
                     "00x0",
                     "x000",
                     "0x00" };
    int m=4,n=4;
    checkpath(maze,m-1,n-1)? cout<<"true"<<endl : cout<<"false"<<endl;                
return 0;
}