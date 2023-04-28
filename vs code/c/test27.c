#include<stdio.h>

int main()
{
    float a,b;
    int choice;
    printf("                   SIMPLE CALCULATORE\n");
    printf("Enter the two numbers to perform operation\n");
    scanf("%f %f", &a,&b);
    printf("enter the operation you want to perform\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("Addition of two numbers\n");
           printf("%f + %f= %f\n",a,b,a+b); 
           break;
    case 2:printf("subtraction of two numbers\n");
           printf("%f - %f= %f\n",a,b,a-b); 
           break;
    case 3:printf("multiplication of two numbers\n");
           printf("%f * %f= %f\n",a,b,a*b); 
           break;
    case 4:printf("division of two numbers\n");
           printf("%f / %f= %f\n",a,b,a/b); 
           break;
    
    default:printf("wrong entry\n");
        break;
    
    }
return 0;
}    


