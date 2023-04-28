#include<iostream>
using namespace std;

class A
{
    private:
    void funcA()
    {
        cout<<"function a is called"<<endl;
    }
    public:
    void funcB()
    {
        cout<<"function b is called"<<endl;
        funcC();
    }

    protected:
    void funcC()
    {
        cout<<"function c is called"<<endl;
    }
};
class B : public A
{
    public:
    funcC();
};
int main()
{
    A a;
    a.funcB();
return 0;
}