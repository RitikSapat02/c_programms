#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("putcdemo.txt","r");
    char c=fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(ptr);
    }
    printf("\n");
    return 0;
}