#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter first no:\n");
    scanf("%d",&a);
    printf("Enter second no:\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("First No is:%d\n",a);
    printf("second no is:%d\n",b);
    return 0;
}
