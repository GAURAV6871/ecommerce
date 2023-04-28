#include<stdio.h>

struct Student

{

char name;
int age;

};
int main()
{
    struct Student arr[3];

    struct Student *p= arr; 

    p++;

    p->name = 'B';

    p++;

    p-> age = 50;

    arr[2].name = 'C' ;

    (*p).age = 30;

    arr->name = 'A' ;

    arr -> age = 10;

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d:%c\t%d\n",i,arr[i].name,arr[i].age);
    }
return 0;
}    