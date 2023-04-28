#include<iostream>
using namespace std;

int romanToInt(string s) 
    {
        int num=0;
        int i=0,a,b;
        if(s[i]=='I')
        {
            a=1;
        }
        else if(s[i]=='V')
        {
            a=5;
        }
        else if(s[i]=='X')
        {
            a=10;
        }
        else if(s[i]=='L')
        {
            a=50;
        }
        else if(s[i]=='C')
        {
            a=100;
        }
        else if(s[i]=='D')
        {
            a=500;
        }
        else if(s[i]=='M')
        {
            a=1000;
        }
        i++;

        while(s[i]!='\0')
        {
            if(a==-1)
            {
                if(s[i]=='I')
                {
                    a=1;
                }
                else if(s[i]=='V')
                {
                    a=5;
                }
                else if(s[i]=='X')
                {
                    a=10;
                }
                else if(s[i]=='L')
                {
                    a=50;
                }
                else if(s[i]=='C')
                {
                    a=100;
                }
                else if(s[i]=='D')
                {
                    a=500;
                }
                else if(s[i]=='M')
                {
                    a=1000;
                }
                i++;
            }
            //checking for the 2nd character
            if(s[i]=='I')
            {
                b=1;
            }
            else if(s[i]=='V')
            {
                b=5;
            }
            else if(s[i]=='X')
            {
                b=10;
            }
            else if(s[i]=='L')
            {
                b=50;
            }
            else if(s[i]=='C')
            {
                b=100;
            }
            else if(s[i]=='D')
            {
                b=500;
            }
            else if(s[i]=='M')
            {
                b=1000;
            }
            // ab humne a or b dono ki values nikal li hain
            // agar a bada hoga to hum b or a ko num me add karenge
            // agar a b se chota hoga to hum to hum b-a ko num me add krenge
            if(a<b)
            {
                num= num+ b-a;
                a=-1;
                b=0;
            }
            else
            {
                num=num+a;
                a=b;
            }
           
            i++;

        }
        
        //cout<<num<<endl;
        if(num==0)
        {
            return a;
        }
        return num+b;
    }
int main()
{
    string s;
    cin>>s;
    int num=romanToInt(s);
    cout<<num<<endl;
}