#include <iostream>
using namespace std;

int main() 
{
	char id;
	int t,j;
	for(j=0;j<t;j++)
	{
	    cin>>id;
	    if(id=='B'||id=='b')
	    {
	        cout<<"BattleShip"<<endl;
	    
	    }
	    else if(id=='C'||id=='c')
	    {
	        cout<<"Cruiser"<<endl;
	    
	    }
	    else if(id=='D'||id=='d')
	    {
	        cout<<"Destroyer"<<endl;
	    
	    }
	    else if(id=='f'||id=='F')
	    {
	        cout<<"Frigate"<<endl;
	    
	    }
	} 
	// your code goes here
	return 0;
}
