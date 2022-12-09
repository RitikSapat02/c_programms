#include<stdio.H>
#include<string.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p={.y=10, .x=20};

    printf("%d %d\n",p.x,p.y);
    return 0;
}