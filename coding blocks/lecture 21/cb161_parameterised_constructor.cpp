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



    Customer(Customer& c)   //Copy constructor  (c3 is passed automatically), c is c3
    {
        strcpy(name, c.name);  // C KA MATLAB HAI C3
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }
 
    Customer(char* n, int a , char g , double c)      // parameterised constructor
    {
        cout<<"i am inside parameterised constructor"<<endl;
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
    }


};





int main()
{
    //Customer c2;
    Customer c3("pranav", 20, 'm',100);
    c3.printcustomerinfo();

    customer c2=c3    //calls defult copy constructor
    c2.printcustomerinfo();

    

return 0;
}