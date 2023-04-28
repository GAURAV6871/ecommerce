#include<stdio.h>

int main()
{
    float c,f;
    printf("enter the temperature in degree celsius\n");
    scanf("%f", &c);
    f=c*1.8+32;
    printf("the temperature in farhenite is %f \n",f);
    return 0;
}    
