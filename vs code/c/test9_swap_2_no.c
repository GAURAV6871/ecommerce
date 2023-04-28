#include<stdio.h>

int main()
{
    int a,b,temp;
    printf("enter the two numbers you want to swap\n");
    scanf("%d %d", &a,&b);
    printf("the numbers before swap are %d and %d.\n", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("the numbers after swap are %d and %d.\n", a,b);
    return 0;
}