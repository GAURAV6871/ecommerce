#include<iostream>
using namespace std;

struct employee
{
    /* data */
    int eid;
    char ename[10];
    float salary;
};

int main()
{
    int n,i;
    char name[20];
    cout<<"for how many employess you want to store the data"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
      cout<<"enter the "<<i<<"st name"<<endl;
      cin>>name; 
      struct employee name;
      cout<<"enter the details for employee "<<endl;
      cout<<"enter the eid"<<endl;
      cin>>name.eid;
      cout<<"enter the name "<<endl;   
      cin>>name.ename;
      cout<<"enter the salary"<<endl;
      cin>>name.salary;
      
      cout<<endl<<"the eid is "<<name.eid<<endl;
      cout<<endl<<"the name is "<<name.ename<<endl;
      cout<<endl<<"the salary is "<<name.salary<<endl;
    } 
  return 0;  

}