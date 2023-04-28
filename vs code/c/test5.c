#include<stdio.h>


int sum (int a,int b);


int main()
{
    int num1,num2,total;
    printf("\n enter first no");
    scanf("%d",&num1);
    printf("\n enter first no");
    scanf("%d",&num2);
    printf("\ntotal = %d ", sum(num1,num2));
return 0;
}


int sum(int a,int b)
{
    int result;
    result=a+b;
    return result;
}