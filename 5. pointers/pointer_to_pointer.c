#include<stdio.h>
int main()
{
    int x=10;
    int *ptr=&x;
    int **p=&ptr;

    printf("value at ptr %d\n",*ptr);
    printf("value at ptr %d\n",*p);
    printf("value at ptr %d\n",**p);
    return 0;
}