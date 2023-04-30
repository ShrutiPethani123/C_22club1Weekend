#include <stdio.h>
struct Student
{

    char name[10];
    int age;
    int id;

} s1, s2, s3;

void main()
{
    // struct Student s;

    // printf("Enter name:");
    // gets(s.name);
    // printf("Enter id:");
    // scanf("%d",&s.id);
    // printf("Enter age:");
    // scanf("%d",&s.age);

    // printf("\nDetails......");
    // printf("%s %d %d",s.name, s.id,s.age);

    struct Student s[3];

    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        printf("Enter name:");
        gets(s[i].name);
        printf("Enter id:");
        scanf("%d", &s[i].id);
        printf("Enter age:");
        scanf("%d", &s[i].age);
    }

    for(int i=0;i<3;i++)
    {
        printf("\nDetails of student %d---------\n",i+1);
        printf("%s %d %d",s[i].name, s[i].id,s[i].age);
    }
}

/*

Make one structure for employee (name , id , age , salary , designation)

1. add Employee
2. display Employee
3. search employee
    id:

*/