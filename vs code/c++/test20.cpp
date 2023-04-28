 #include<iostream>
 using namespace std;

 int sum(int a, int b)
 {
     int sum=0;
     sum=a+b;
     cout<<"the sum of two  numbers is "<<sum;
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
     return 0;
 }
 