#include<iostream>
using namespace std;
void print_first_path(char maze[][1000],int out[][1000],int i,int j,int n,int m,bool &flag){
    // base case
    if( flag ){
        return;
    }
    if(i==n-1 and j==m-1){
        out[i][j] = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<out[i][j]<<" ";
            }
            cout<<endl;
        }
        // cout<<endl;
        out[i][j] = 0;
        flag = true;
        return;
    }
    // recursive case
    if(maze[i][j] == 'X'){
        return;
    }
    out[i][j] = 1;
    if(j<m){
        print_first_path(maze,out,i,j+1,n,m,flag);
    }
    if(i<n){
        print_first_path(maze,out,i+1,j,n,m , flag);
    }
    out[i][j]=0;
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    bool flag = false;
    char maze[1000][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>maze[i][j];
		}
	}
    int out[1000][1000];
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<m;j++){
            out[i][j] = 0;
        }
    }
    print_first_path(maze,out,0,0,n,m,flag);
	if(flag==false)
	{
		cout<<"-1";
	}
    return 0;
}