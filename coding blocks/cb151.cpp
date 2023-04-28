#include<iostream>
using namespace std;


int checkpath(char maze[][5], int i,int j,int count)
{
    if(i==0 && j==0)
    {
        return 1;
    }
    if(maze[i][j]=='x')
    {
        return 0;
    }
    if(i==0)
    {
        count++;
        return  checkpath(maze,i,j-1,count);
    }
    if(j==0)
    {
        count++;
        return checkpath(maze,i-1,j,count);
    }
    //ask your friend if you can reach i ,jth cell from left
    
    //int x=checkpath(maze, i-1,j);
    //ask your friend if you can reach i ,jth cell from top
    //bool y=checkpath(maze, i,j-1);
    //return x or y;
    return count+(checkpath(maze, i-1,j,count) + checkpath(maze, i,j-1,count));
}

int main()
{   
    char maze[5][5]={"000x",
                     "00x0",
                     "x000",
                     "0x00" };
    int m=4,n=4,count=0;
    //checkpath(maze,m-1,n-1,count)? cout<<"true"<<endl : cout<<"false"<<endl; 
    cout<<checkpath(maze,m-1,n-1,count)<<endl;           
return 0;
}