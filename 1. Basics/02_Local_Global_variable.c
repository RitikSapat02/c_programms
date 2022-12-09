//Global and local variable in c

#include<stdio.h>
int a=10;     //global variable
int x=6;      //global variable

int main()
{
    int a=20;    //priority to local 
    int b=10;

    printf("a = %d , b = %d\n",a,b);

    {
        printf("a=%d",a);
    }
    return 0;
}
