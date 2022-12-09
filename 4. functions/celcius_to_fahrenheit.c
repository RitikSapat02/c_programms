#include<stdio.h>
float fah(int cel)
{
    return ((float)9/5 *cel)+32;
}
int main()
{
    int cel;
    scanf("%d",&cel);
    printf("FAHRENHEIT: %f\n",fah(cel));
    return 0;
}