#include<stdio.h>
int main()
{
   printf("%d\n",5/2);
   printf("%f\n",5/2); //compiler expect %d as 5/2 is int for compiler

   printf("%f\n",5.0/2);
   printf("%d\n",5.0/2);

   printf("%f\n",5.0/2.0);
   printf("%d\n",5.0/2.0);

   int a=6.7;
   printf("%d\n",a);
   printf("%f\n",a);

   int k=9/3.0;
   printf("%d\n",k);
   printf("%f\n",k);

   printf("%dcv\n",9/3.0);

   char r=99;   //It will conside no as ascii value and primmt that character belonghing to it
   printf("%c\n",r);
   printf("%d\n",r); //it will consider 99 ASCII Value as a character
   
   char t=5.5;
   printf("%f\n",t);

   return 0;

}
