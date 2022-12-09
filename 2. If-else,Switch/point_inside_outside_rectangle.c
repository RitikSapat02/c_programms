#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x,y;
    printf("Enter x and y coordinates of top left vertex: ");
    scanf("%d %d",&x1,&y1);

    printf("Enter x and y coordinates of bottom right vertex: ");
    scanf("%d %d",&x2,&y2);

    printf("Enter x and y coordinates of points: ");
    scanf("%d %d",&x,&y);

    if(x>x2 && x<x1 && y>y2 && y<y1){
        printf("inside\n");
    }
    else{
        printf("outside\n");
    }
    return 0;
}