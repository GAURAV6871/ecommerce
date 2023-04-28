#include <iostream>
using namespace std;
 
void removeduplicates(char* str, int n)
{
    for(int i=0;str[i]!='\0';)
    {
        char key=str[i];
        int count=0;
        while(str[i]==key)
        {
            count++;
            i++;
        }
        cout<<key;
    }
    

}
int main()
{
   char str[1000];
   cin.getline(str,1000);
   int n = sizeof(str) / sizeof(str[0]);
   removeduplicates(str, n);
   cout<<endl;
   return 0;
}