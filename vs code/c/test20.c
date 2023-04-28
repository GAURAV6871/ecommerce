#include<stdio.h>

int main()
{
    int n,a,b,sum=0,prod=1,div=1;
    printf("enter the two numbers\n");
    scanf("%d %d ", &a, &b);
    printf("Enter 1 for addition");
    printf("Enter 2 for subtraction");
    printf("Enter 3 for multiplication");
    printf("Enter 4 for division");
    printf("Enter your choice");
    scanf("%d",&n);

    switch (n)
    {
    case 1:sum=a+b;
           printf("the sum is %d\n",sum);
           break;
    case 2:sum=a-b;
           printf("the difference is %d\n",sum);
           break;
    case 3:prod=a*b;
           printf("the product is %d\n",prod);
           break;
    case 4:div=a/b;
           printf("the product is %d\n",div);
           break;
    default:printf("wrong input\n");
            break;
    }
return 0;
}