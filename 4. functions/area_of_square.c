#include<stdio.h>
int area(int r);

int main()
{
    int r;
    printf("Enter side of a square\n");
    scanf("%d",&r);
    printf("Area of a square: %d sq units\n",area(r));
    return 0;
}

int area(int r)
{
    return r*r;
}