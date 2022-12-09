#include<stdio.h>
int main()
{
    int b=2,c=3;
    int z;
    z=b*c;  //Valid
    b*c=z;  //Invalid
    return 0;
}