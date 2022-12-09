#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("generated.txt","w");
    int a=42;
    fprintf(ptr,"%d %d",25,42);
    fprintf(ptr,"\nHere we have written a sentence in the file.\n");
    fclose(ptr);
    return 0;
}