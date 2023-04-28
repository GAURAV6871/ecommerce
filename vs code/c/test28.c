#include<stdio.h>

int main()
{
    float r,h,b,s,length,breadth;
    int choice;
    printf("                   AREA OF 2D FIGURES\n");
    printf("enter the shape of which you want the area to be found of\n");
    printf("1.Circle\n2.Triangle\n3.Square\n4.Rectangle\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("Area of Circle\n");
           printf("enter the radius of the circle\n");
           scanf("%f",&r);
           printf("3.14* %f * %f= %f\n",r,r,3.14*r*r); 
           break;
    case 2:printf("Area of triangle\n");
           printf("enter the base and height of the triangle\n");
           scanf("%f %f",&h,&b);
           printf("0.5* %f * %f= %f\n",h,b,0.5*b*h); 
           break;
    case 3:printf("Area of square\n");
           printf("enter the side of the square\n");
           scanf("%f ",&s);
           printf("%f * %f= %f\n",s,s,s*s); 
           break;
    case 4:printf("Area of rectangle\n");
           printf("enter the breadth and length of the recatangle\n");
           scanf("%f %f",&length,&breadth);
           printf("%f * %f= %f\n",length,breadth,breadth*length); 
           break;
    
    default:printf("wrong entry\n");
        break;
    
    }
return 0;
}    


