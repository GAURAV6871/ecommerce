#include<stdio.h>

struct doctor
{
    char* name;
    int age;
    char* speciality;
};

struct patient
{
    char* name;
    int age;
    char* disease;
};

int main()
{
    int n,m;
    printf("enter the number of doctors\n");
    scanf("%d",&n);
    struct doctor doc[n];
    printf("\ndoctor's data\n\n");

    doc[0].name="gaurav";                           doc[1].name="amit";
    doc[0].age=29;                                  doc[1].age=28;
    doc[0].speciality="heart";                      doc[1].speciality="lungs";

    for(int i=0;i<n;i++)
    {
        printf("\nName= %s",doc[i].name);
        printf("\nAge= %d",doc[i].age);
        printf("\nAddress= %s\n",doc[i].speciality);
    }

    printf("\n\nenter the number of patients\n");
    scanf("%d",&m);
    struct patient p[n];
    printf("\npatient's data\n\n");

    p[0].name="gaurav";                           p[1].name="amit";
    p[0].age=29;                                  p[1].age=28;
    p[0].disease="heart disease";                 p[1].disease="lung cancer";

    for(int i=0;i<m;i++)
    {
        printf("\nName= %s",p[i].name);
        printf("\nAge= %d",p[i].age);
        printf("\nAddress= %s\n",p[i].disease);
    }
return 0;


}
