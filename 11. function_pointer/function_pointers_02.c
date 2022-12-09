#include<stdio.h>

int add(int x, int y)
{
    return x+y;
}

int multiply(int x, int y)
{
    return x*y;
}

void compute(int x, int y, int (*ptr)(int x, int y))
{
    printf("Result is %d\n",ptr(x,y));
}

int main()
{
    compute(2,4,add);
    compute(2,4,multiply);
    return 0;
}