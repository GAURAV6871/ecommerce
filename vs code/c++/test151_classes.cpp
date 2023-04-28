#include<iostream>
using namespace std;

class student
{
    int age,roll;
    string name;
    public:
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
    for(i=0;i<n;i++)
    {
        arr[i].getinfo();
    }
    for(i=0;i<n;i++)
    {
        arr[i].putinfo();
    }
return 0;
}