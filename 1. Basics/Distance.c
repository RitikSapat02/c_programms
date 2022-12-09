#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float distance;
    printf("Enter the coordinates of first point:\n");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates of second point:\n");
    scanf("%d %d",&x2,&y2);
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    printf("Distance between two points is:%f\n",distance);
    return 0;
}