#include<stdio.h>

void fun(){
    int x=10; //Local
    static int y=10; //Static
    x++,y++;

    printf("%d %d\n",x,y);
}

int main()
{
   fun();
   fun();
   fun();
   return 0;
}
