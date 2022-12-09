#include<stdio.h>
int main()
{
    FILE *ptr,*ptr1;
    ptr=fopen("num3.txt","r");
    ptr1=fopen("new.txt","w");

    char c=getc(ptr);
    while(c!=EOF)
    {
        fputc(c,ptr1);
        fputc(c,ptr1);
        c=getc(ptr);
    }
    fprintf(ptr1,"\n");
    return 0;
}