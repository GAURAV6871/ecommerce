#include<stdio.h>

void factorial(int a)
{
    int fact=1;
    for(int i=a;i>=1;i--)
    {
        fact*=i;
    }
    printf("the factorial of %d is %d\n",a,fact);
}
int main()
{
    int a;
    scanf("%d",&a);
    factorial(a);
    return 0;
}    
