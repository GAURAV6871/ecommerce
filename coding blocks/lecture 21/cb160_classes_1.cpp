#include<iostream>
using namespace std;

class Customer
{
    public:

    char name[100];
    int age;
    char gender;
    double credits;

    void printcustomerinfo()
    {
        cout<<name<<" "
        <<age<<" "
        <<gender<<" "
        <<credits<<" "<<endl;
    }

    Customer()   // default constructor it will be called whenever an object to the class is created
    {
        cout<<"i am inside the default constructor"<<endl;
    }

    Customer(char* n, int a , char g , int credits)
    {
        cout<<"i am inside parameterised constructor"<<endl;
    }


};





int main()
{
    Customer c1;
    //cout<<sizeof(c1);
    strcpy(c1.name,"Gaurav");
    c1.age=20;
    c1.gender='M';
    c1.credits=100;
    //cout<<c1.name<<" "<<c1.age<<" "<<c1.gender<<" "<<c1.credits<<" "<<endl;
    c1.printcustomerinfo();
    
    
    Customer c2;
    strcpy(c2.name,"Shivanshu");
    c2.age=28;
    c2.gender='M';
    c2.credits=0;
    //cout<<c2.name<<" "<<c2.age<<" "<<c2.gender<<" "<<c2.credits<<" "<<endl;
    c2.printcustomerinfo();


    Customer c3("pranav", 20, 'm',100);
return 0;
}