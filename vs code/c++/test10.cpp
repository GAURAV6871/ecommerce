#include<iostream>
using namespace std;
 
int main()
{
    int age;
    cout<<"this is my first programme of if else statement"<<endl;
    cout<<"\n tell me your age"<<endl;
    cin>>age;
    
    if(age<18 && age>=40)
        {
            cout<<"you can not come to my party"<<endl;
        }
    
    else if(age==18)
        {
            cout<<"you can still not come to my party"<<endl;
        }    
    else
        {
            cout<<"you are most welcome to my party"<<endl;
        }      
return 0;
}
