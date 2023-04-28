#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter the three numbers\n");
    scanf("%d %d %d", &a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("the largest of three numbers is %d\n",a);
        }
    }
    if(b>=a)
    {
        if(b>=c)
        {
            printf("the largest of three numbers is %d\n",b);
        }
    }
    if(c>=b)
    {
        if(c>=a)
        {
            printf("the largest of three numbers is %d\n",c);
        }
    }
    return 0;
}    
