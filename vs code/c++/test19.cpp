#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    char ename[10];
    float salary;
}ep;

int main()
{
    int n,i;
    char name[20];
    ep gaurav;
    ep rohan; 
    cout<<"enter the details for employes "<<endl;
    cout<<"enter the eid"<<endl;
    cin>>gaurav.eid;
    cout<<"enter the name "<<endl;   
    cin>>gaurav.ename;
    cout<<"enter the salary"<<endl;
    cin>>gaurav.salary;
    cout<<"enter the eid"<<endl;
    cin>>rohan.eid;
    cout<<"enter the name "<<endl;   
    cin>>rohan.ename;
    cout<<"enter the salary"<<endl;
    cin>>rohan.salary;
    cout<<endl<<"the eid is "<<gaurav.eid<<endl;
    cout<<endl<<"the name is "<<gaurav.ename<<endl;
    cout<<endl<<"the salary is "<<gaurav.salary<<endl;
    cout<<endl<<"the eid is "<<rohan.eid<<endl;
    cout<<endl<<"the name is "<<rohan.ename<<endl;
    cout<<endl<<"the salary is "<<rohan.salary<<endl;
return 0;  

}