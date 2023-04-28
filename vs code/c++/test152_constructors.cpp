#include<iostream>
using namespace std;

class student
{
    int age,roll;
    string name;
    public:
    //default constructor
    student()
    {
        cout<<"default constructor is called first automatically"<<endl;
    }

    //parametric constructor
    student(string s int a, inr r)
    {
        cout<<"calling of parametric function";
        name=s;
        age=a;
        roll=r;
    }

    //copy constructor
    student(student &a)
    {
        cout<<"copy constructor is called"<<endl;
        name=a.name;
        age=a.age;
        roll=a.roll;
    }

    void getinfo()
    {
        cout<<"enter the name"<<endl;
        cin>>name;
        cout<<"enter the age"<<endl;
        cin>>age;
        cout<<"enter the roll no"<<endl;
        cin>>roll;
    }
    void putinfo()
    {
        cout<<endl<<"name of the student is "<<name<<endl;
        cout<<"age of the student is "<<age<<endl;
        cout<<"roll no of the student is "<<roll<<endl;
    }
};

int main()
{
    int n,i;
    cout<<"enter the number of the students"<<endl;
    cin>>n;
    student arr[n];
    student a("gaurav",21, 20 );
    a.putinfo();
    student b;
    student c=a;
    c.putinfo();

return 0;
}