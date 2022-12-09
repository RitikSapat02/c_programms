#include<stdio.h>
int main()
{
    int x=10;
    void *p=&x;
    // printf("%d",*p);        error void pointer cannot be dereferenced

     int *p2=p;          //void pointer assigned to int pointer
     char y='a';
     char *pp=&y;
     p=pp;
     return 0;

}