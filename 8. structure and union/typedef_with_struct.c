#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int id;
    char name[25];
}emp;

int main()
{
    emp e={18,"Virat"};
    emp e1;
    strcpy(e1.name,"Rohit");
    e1.id=45;
    printf("%d %s\n",e1.id,e1.name);
    return 0;
}