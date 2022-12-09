#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two nos: ");
    scanf("%d %d",&a,&b);
    printf("The remainder when %d is divided by %d is %d\n",a,b,a%b);
    // % is modular divison operator and cannot be applied on floats
}