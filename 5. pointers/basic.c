#include<stdio.h>
int main()
{
    int x=19;
    int *ptr=&x;
    printf("Address: %p\n",&x);
    printf("Address: %x\n",&x);
    printf("Address: %u\n",&x);

    printf("Address: %p\n",ptr);
    printf("Address: %p\n",&ptr);

    printf("Value: %d\n",x);
    printf("Value: %d\n",*ptr);
    printf("Value: %d\n",*&x);
    return 0;


}