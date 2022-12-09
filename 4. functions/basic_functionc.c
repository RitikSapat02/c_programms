// program to greet good morning/good afternoon/good night
#include<stdio.h>

void gm();  //prototype
void gn();
void gA();

int main()
{
    gm();  //function call
    return 0;
}

void gm()   //function defination
{
   printf("Good Morning\n");
   gA();
}   

void gA()
{
    printf("Good afternoon\n");
    gn();
}

void gn()
{
    printf("Good Night\n");
}

