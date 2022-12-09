#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("getcdemo.txt","r");
    char c=getc(ptr);
    fclose(ptr);
    printf("The value of my character in the file is %c\n",c);
    return 0;
}