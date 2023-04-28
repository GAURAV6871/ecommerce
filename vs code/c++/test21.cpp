 #include<iostream>
 using namespace std;

 int sum(int a, int b)
 {
     int sum=0;
     sum=a+b;
     cout<<"the sum of two  numbers is "<<sum<<endl;
     return 0;
 }
 int difference(int a, int b)
 {
     int diff=0;
     diff=a-b;
     cout<<"the difference of two  numbers is "<<diff<<endl;
     return 0;
 }
 int product(int a, int b)
 {
     int prod=1;
     prod=a*b;
     cout<<"the product of two  numbers is "<<prod<<endl;
     return 0;
 }
 int dividend(int a, int b)
 {
     int div=1;
     div=a/b;
     cout<<"the dividend of two  numbers is "<<div<<endl;
     return 0;
 }
 int main()
 {
     int a,b;
     cout<<"enter the first no"<<endl;
     cin>>a;
     cout<<"enter the second no"<<endl;
     cin>>b;
     sum(a,b);
     difference(a,b);
     product(a,b);
     dividend(a,b);
     return 0;
 }
 