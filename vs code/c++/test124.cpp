#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float salary=0,basic;
    int allow;
    char grade;
    cin>>basic>>grade;
    float hra=(basic)*0.2;
    float da=(basic)*0.5;
    float pf=(basic)*0.11;
    
    if(grade=='A')
    {   
        salary=basic+hra+da+1700-pf;
    }	// Write your code here
	
    else if(grade=='B') 
    {
        salary=basic+hra+da+1500-pf;  
    }
    else
    {
        salary=basic+hra+da+1300-pf;
    }
    cout<<round(salary)<<endl;
return 0;
}