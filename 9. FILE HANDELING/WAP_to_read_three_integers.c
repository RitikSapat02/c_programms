#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("num3.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    return 0;
}