#include<stdio.h>
#include<string.h>

union student 
{
    char name[34];
    int id;
    int marks;
    char fav_char;
};

int main()
{
    union student s;
    strcpy(s.name,"Ritik");
    s.marks=23;
    s.fav_char='R';
    s.id=1;

    printf("name = %s\n",s.name);
    printf("fav_char = %c\n",s.fav_char);
    printf("id = %d\n",s.id);
    printf("marks = %d\n",s.marks);
    return 0;

}