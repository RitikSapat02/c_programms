#include<stdio.h>
#include<string.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p;
    struct point *ptr=&p;

    ptr->x=34;
    ptr->y=35;

    printf("%d %d\n",ptr->x,ptr->y);
    return 0;
}
