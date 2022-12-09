#include <stdio.h>
int main()
{
    int a = 20000, b = 5, c = 37, d = 4;
    if (a > b && a > c && a > d)
    {
        printf("a is greatest\n");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is greatest\n");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is greatest\n");
    }
    else{
        printf("d is greatest");
        
    }
    return 0;
}