#include<stdio.h>
int main()
{
    //1st Method
    // char c;
    // scanf("%c",&c);
    // printf("You Entered: %c\n",c);
    
    //2nd Method
    // char d=getchar();
    // printf("You Entered:");
    // putchar(d);

    //3rd Method
    char s[100];
    gets(s);
    printf("You Entered:");
    
    puts(s);

    return 0;
}