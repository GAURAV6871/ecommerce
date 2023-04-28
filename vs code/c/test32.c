#include<stdio.h>

struct student
{
    char* name;
    int age;
    int rollno;
    char* address;
};
int main()
{
    int n;
    printf("enter the number of students\n");
    scanf("%d",&n);
    struct student student[n];
    printf("\nstudents data\n\n");

    student[0].name="gaurav";                           student[1].name="amit";
    student[0].age=19;                                  student[1].age=19;
    student[0].rollno=12;                               student[1].rollno=12;
    student[0].address="mahendra park";                 student[1].address="mahendra park";

    for(int i=0;i<n;i++)
    {
        printf("\nName= %s",student[i].name);
        printf("\nAge= %d",student[i].age);
        printf("\nRoll no.= %d",student[i].rollno);
        printf("\nAddress= %s",student[i].address);
    }
return 0;


}