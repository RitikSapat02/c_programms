#include<stdio.h>
int main()
{
    float celcius;
    float far;
    printf("Enter the tempearture in celcius: ");
    scanf("%f",&celcius);
    far=(celcius*9/5)+32;
    printf("The temperature in fahrenheit is: %f\n",far);
    return 0;
}