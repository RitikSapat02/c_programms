#include<stdio.h>
int main()
// #define pi 3.14

{
    //Area of circle
    int r;
   #define pi 3.14//contant declaration
    printf("Enter the radius of a circle: ");
    scanf("%d",&r);
    printf("Area of a circle is %.2f sruare units\n",r*r*pi);
    //Volume of cylinder
    int h;
    printf("Enter height: ");
    scanf("%d",&h);
    printf("Volume of a cylinder is: %.2f cc",r*r*pi*h);
    return 0;

}