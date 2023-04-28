#include<iostream>
using namespace std;

void placequeens(int n, int* sol, int r)
{
    if(r==n)
    {
        /*
        for(int i=1;i<=n;i++)
        {
            cout<<sol[i]<<" ";
        }
        cout<<endl;*/
        for(int i=0; i<n; i++) 
        {
			for(int j=0; j<n; j++) 
            {
				if(sol[i] == j) 
                {
					cout <<"{"<<i+1<<"-"<<j+1<<"} ";
				} 
			}
            if(i==n-1)
            {
                cout<<" ";
            }
            
		}
        return;
    }

    for(int j=0;j<n;j++)
    {
        bool canplace=true;
        for(int i=0;i<r;i++)
        {
            //checking for the (same column) or for (left diagonal) or for (right diagonal)
            if(sol[i]==j  || sol[i]==j-(r-i)  ||  sol[i]==j+(r-i))
            {
                canplace=false;
                break;
            }   
        }
        if(canplace)
        {
            sol[r] = j;
			placequeens(n, sol, r+1);
        }
    }
    
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sol[10];
    placequeens(n,sol,0);
    cout<<endl;
return 0;
}