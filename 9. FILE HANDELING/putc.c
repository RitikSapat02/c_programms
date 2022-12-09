#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("putcdemo.txt","w");
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('F',ptr);
    fputc('a',ptr);
    fputc('m',ptr);
    fputc('i',ptr);
    fputc('l',ptr);
    fputc('y',ptr);
    fputc(' ',ptr);
    fputc('M',ptr);
    fputc('e',ptr);
    fputc('m',ptr);
    fputc('b',ptr);
    fputc('e',ptr);
    fputc('r',ptr);
    fputc('s',ptr);
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('*',ptr);
    fputc('\n',ptr);

    fputc('P',ptr);
    fputc('r',ptr);
    fputc('a',ptr);
    fputc('t',ptr);
    fputc('i',ptr);
    fputc('k',ptr);
    fputc(' ',ptr);
    fputc('S',ptr);
    fputc('a',ptr);
    fputc('p',ptr);
    fputc('a',ptr);
    fputc('t',ptr);
    fputc('\n',ptr);

    fputc('N',ptr);
    fputc('a',ptr);
    fputc('l',ptr);
    fputc('u',ptr);
    fputc(' ',ptr);
    fputc('S',ptr);
    fputc('a',ptr);
    fputc('p',ptr);
    fputc('a',ptr);
    fputc('t',ptr);
    fputc('\n',ptr);

    
    fputc('R',ptr);
    fputc('a',ptr);
    fputc('j',ptr);
    fputc('u',ptr);
    fputc(' ',ptr);
    fputc('S',ptr);
    fputc('a',ptr);
    fputc('p',ptr);
    fputc('a',ptr);
    fputc('t',ptr);
    fputc('\n',ptr);
    
    

    fputc('R',ptr);
    fputc('i',ptr);
    fputc('t',ptr);
    fputc('i',ptr);
    fputc('k',ptr);
    fputc(' ',ptr);
    fputc('S',ptr);
    fputc('a',ptr);
    fputc('p',ptr);
    fputc('a',ptr);
    fputc('t',ptr);
    fclose(ptr);
    return 0;
}