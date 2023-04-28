#include<iostream>
using namespace std;


void printpath(char maze[][5], char path[][5],int i,int j)
{
    if(i==0 && j==0)
    {
        path[i][j]=1;
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        path[i][j]='0';
    }


    if(i<0 && j<0)
    {
        return ;
    }
    if(maze[i][j]=='x')
    {
        return ;
    }
    
    path[i][j]='1';
    printpath(maze,path,i-1,j);
    printpath(maze,path,i,j-1);
    path[i][j]='0';  //....back tracking

}

int main()
{   
    char maze[5][5]={"000x",
                     "00x0",
                     "x000",
                     "0x00" };

    char path[5][5]={"0000",
                     "0000",
                     "0000",
                     "0000" };

    int m=4,n=4,count=0;
    //checkpath(maze,m-1,n-1,count)? cout<<"true"<<endl : cout<<"false"<<endl; 
    printpath(maze,path,m-1,n-1);          
return 0;
}