#include<iostream>
using namespace std;


void placeknights(int n, int* sol, int r,int &count)
{
    if(r==n)
    {
        for(int i=0; i<n; i++) 
        {
			for(int j=0; j<n; j++) 
            {
				if(sol[i] == j) 
                {
					cout <<"{"<<i<<"-"<<j<<"} ";
				} 
			}
            if(i==n-1)
            {
                cout<<" ";
            }  
		}
        count++;
        return;
    }

    for(int j=0;j<n;j++)
    {
        bool canplace=true;
        for(int i=0;i<r;i++)
        {
            //checking for the (same column) or for (left diagonal) or for (right diagonal)
            if((sol[i]==i+2  && sol[i]==j+1)  || (sol[i]==i+2  && sol[i]==j-1)  ||  (sol[i]==j+2  && sol[i]==i+1)  ||   (sol[i]==j-2  && sol[i]==i+1) || (sol[i]==i-2  && sol[i]==j+1)  ||  (sol[i]==i-2  && sol[i]==j-1)  ||  (sol[i]==i-1  && sol[i]==j+2)  ||  (sol[i]==i-1  && sol[i]==j-2)  || (sol[i]==i+1  && sol[i]==j-2)  || (sol[i]==i+1  && sol[i]==j+2))
            {
                canplace=false;
                break;
            }   
        }
        if(canplace)
        {
            sol[r] = j;
			placeknights(n, sol, r+1,count);
        }
    }
    
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sol[10];
    int count=0;
    placeknights(n,sol,0,count);
    cout<<endl<<count<<endl;
return 0;
}