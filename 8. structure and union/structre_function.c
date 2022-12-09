#include<stdio.h>
#include<string.h>

typedef struct student 
{
    int id;
    char name[20];
}student;

void changes(student *ptr)
{
    strcpy(ptr->name,"NA");
}
int main()
{
    student s={101,"ABC"};
    changes(&s);
    printf("%d %s\n",s.id,s.name);
    return 0;
}