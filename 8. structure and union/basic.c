#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    float salary;
    char name[20];
};

void print(struct employee e)
{
    printf("Name : %s\n",e.name);
    printf("id : %d\n",e.id);
    printf("salary : %lf\n",e.salary);
}
int main()
{
    struct employee e;
    struct employee e1={32,456.5,"Shashank"};
    e.id=22;
    e.salary=2000.67;
    scanf("%s",&e.name);
    print(e);
    printf("\nNext variable\n\n");
    print(e1);
    return 0;
}