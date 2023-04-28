#include<stdio.h>

int main()
{
    int a,rem=1, div=1;
    printf("enter the three digit number.\n ");
    scanf("%d",&a);
    rem=a%10;
    div=a/100;
    if(rem==div)
    {
        printf("the etered number is a pallindrome\n");
    }
    else
    {
        printf("the etered number is a not a pallindrome\n");
    }
return 0;
}
