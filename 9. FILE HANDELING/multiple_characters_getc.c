#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("getcdemo.txt","r");
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c",fgetc(ptr));
    printf("%c\n",fgetc(ptr));
    return 0;
}