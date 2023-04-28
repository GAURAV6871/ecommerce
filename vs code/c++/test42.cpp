#include<iostream>
#include<string>
using namespace std;
class student
{   int age,standard;
    string first_name, last_name;
    
    
    public:
    void set_age(int newage)
    {
        age=newage;
    }
    void set_standard(int newstandard)
    {
        standard=newstandard;
    }
    void set_first_name(string cfirst_name)
    {
        first_name=cfirst_name;
    }
    void set_last_name(string clast_name)
    {
        last_name=clast_name;
    }


    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    void get_first_name()
    {
        cout<<first_name;
    }
    void get_last_name()
    {
        cout<<last_name;
    }
};


int main()
{
    student st;
    int age,standard;
    string first_name, last_name;
    cin>>age>>standard>>first_name>>last_name;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout<< st.get_age() << "\n";
    st.get_last_name();
    cout<<", ";
    st.get_first_name();
    cout<<st.get_standard(); 
    cout<< "\n";
    
return 0;
}
