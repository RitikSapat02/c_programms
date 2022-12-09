// property of scanf

#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a:\n");  //enter two nos seprated by space the b will automatically          take second value
    scanf("%d",&a);
    printf("a is %d\n",a);
    scanf("%d",&b);
    printf("Enter b:\n");
    printf("this is your b:%d\n",b);
    return 0;
}

