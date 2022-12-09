#include<stdio.h>
#include<string.h>

typedef struct camera
{
    int front;
    int rear;
}camera;

struct phone
{
    char name[10];
    int RAM;
    int ROM;
    char processor[15];
    camera camera;
    double price;
};

int main()
{
    struct phone moto;
    strcpy(moto.name,"moto123");
    moto.RAM=4;
    moto.ROM=32;
    strcpy(moto.processor,"snapdragon");
    moto.price=4500;
    moto.camera.front=13;
    moto.camera.rear=16;

    printf("%s\n%s\n%lf\n%d\n%d\n%d\n%d\n",moto.name,moto.processor,moto.price,moto.camera.front,moto.camera.rear,moto.RAM,moto.ROM);
    return 0;
}