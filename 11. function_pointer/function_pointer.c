#include<stdio.h>

void fun()
{
    printf("GFG\n");
}

int main()
{
    void (*ptr)()=fun;
    ptr();
    return 0;
}