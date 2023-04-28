#include<stdio.h>

int main()
{
    int a,b,c,big;
    printf("enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    //checking for largest number
    if(a>=b)
    {
        if(a>=c)
        {
            printf("a is biggest\n");
        }
    }
    if(b>=a)
    {
        if(b>=c)
        {
            printf("b is biggest\n");
        }
    }
    if(c>=b)
    {
        if(c>=a)
        {
            printf("c is biggest\n");
        }
    }
    //checking for smallest number
    if(a<=b)
    {
        if(a<=c)
        {
            printf("a is smallest\n");
        }
    }
    if(b<=a)
    {
        if(b<=c)
        {
            printf("b is smallest\n");
        }
    }
    if(c<=b)
    {
        if(c<=a)
        {
            printf("c is smallest\n");
        }
    }
return 0;
}