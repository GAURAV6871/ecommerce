#include<iostream>
using namespace std;

class Customer
{
    public:

    char *name;         // pointer to a character
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
        cout<<"i am inside copy constructor"<<endl;
        strcpy(name, c.name);  // C KA MATLAB HAI C3
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }
 
    Customer(char* n, int a , char g , double c)      // parameterised constructor
    {
        cout<<"i am inside parameterised constructor"<<endl;
        name = new char[100];
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
    }

    void operator=(Customer& c)   //operator= is the name of the function
    {
        cout<<"inside copy assignment operater"<<endl;
        strcpy(name, c.name);  // C KA MATLAB HAI C3
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }
    ~Customer()
    {
        cout<<"inside destructor of"<<name<<endl;of dynamic 
        delete [] name;// to free the memory 
    }


};





int main()
{
    //Customer c2;
    Customer c3("pranav", 20, 'm',100);
    c3.printcustomerinfo();

    Customer c2;    //calls defult copy assignment operator
    c2=c3;
    c2.printcustomerinfo();


return 0;
}