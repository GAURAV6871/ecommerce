#include<iostream>
using namespace std;
int i=1;
void toh(int n, char* src,char* dest, char* hlp)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,hlp,dest);
    cout<<"Move "<<n<<"th disc from "<<src<<" to "<<dest<<endl;//<<" using source "<<hlp<<endl; 
    ::i++;
    toh(n-1,hlp,dest,src);
}

int main()
{
    int n;
    cin>>n;
    char a[10]="T1",b[10]="T2",c[10]="T3";
    
    toh(n,a,b,c);
    std::cout<<i-1<<endl;
return 0;
}




#include<iostream>

using namespace std;

int count=1;
void toh(int n, char* src, char* dst, char* hlp) 
{

	// base case
	if(n == 0) 
    {
		return;
	}

	// recursive case

	// 1. ask your friend to move (n-1) disks from src to hlp using dst
	toh(n-1,src, hlp, dst);

	// 2. move the largest disk from src to dst
    
	cout << "Move"<<n<<"th disk from" << src << "to" << dst << endl;
    ::count++;

	// 3. ask your friend to move (n-1) disks from hlp to dst using src
	toh(n-1, hlp, dst, src);
}

int main() 
{

	int n;
    cin>>n;
    
    char a[10]="T1",b[10]="T2",c[10]="T3";
	toh(n, a, b, c);
    std::cout<<count-1<<endl;

	return 0;
}