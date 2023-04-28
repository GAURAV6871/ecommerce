#include <iostream>
using namespace std;

class RBI
{
public:

   float min_Interest_Rate = 4;
   double min_Balance_Allowed = 500;
   double max_Withdrawl = 50000;
};

class PNB : public RBI 
{
   public:
        int(setMinimumRate(float rate)) 
        {
            min_Interest_Rate = rate;
        }
};

int main()
{
   RBI b;
   float rate;
   double withdrawl;
   double balance;

   cout << "Enter interest rate \n";
   cin >> rate;
   if (b.min_Interest_Rate <= rate)
   {
       cout << "Eligible under RBI rules\n";
   }
   else
   {
       cout << "Not elligible under RBI rules\n";
   }
   cout << "Enter withdrawl \n";
   cin >> withdrawl;
   if (b.max_Withdrawl >= withdrawl)
   {
       cout << "Eligible under RBI rules\n";
   }
   else
   {
       cout << "Not elligible under RBI rules\n";
   }

   cout << "Enter minimum balance\n";
   cin >> balance;

   if (b.min_Balance_Allowed <= balance)
   {
       cout << "Eligible under RBI rules\n";
   }
   else
   {
       cout << "Not elligible under RBI rules\n";
   }
   return 0;
}