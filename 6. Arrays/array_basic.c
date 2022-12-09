#include<stdio.h>
int main()
{
    int marks[4];
    int student[5]={1,2,3,4,5};  //initialization and declaration
    
    int s[]={1,2,4};

    int a[6]={1,2,34};    //rest elements of an array are initialized as 0

    int d[8]={0};  //all elements of array are initialized to 0
 
    printf("%d\n",student[0]);
    printf("%d\n",student[4]);

    //passing variable to specify size of the array
    int n;
    scanf("%d",&n);
    int arr[n];

    //inputing in array using for loop
    printf("Enter elements od array\n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&marks[i]);
    }

    //printing array elements using for loop
      for(int i=0; i<5; i++)
    {
       printf("%d\n",marks[i]);
    }
    return 0;
}