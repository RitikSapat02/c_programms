#include<stdio.h>
#include<math.h>
int main(){
    int x1,y1,x2,y2,r;
    printf("Enter x and y coordinates of center: ");
    scanf("%d %d",&x1,&y1);
    
    printf("Enter x and y coordinates of point: ");
    scanf("%d %d",&x2,&y2);

    printf("Enter radius: ");
    scanf("%d",&r);

    double distance= sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    if(r>distance){
        printf("Point (%d,%d) is inside the circle\n",x2,y2);
    }

    else if(r<distance){
        printf("point (%d,%d) is outside the circle\n",x2,y2);
    }
    else{
        printf("point lies on circle\n");
    }
    return 0;
}