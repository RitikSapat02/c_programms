#include<stdio.h>
int main()
{
    int arr[]={1,23,4,4,54,4};

    //size of arr
    printf("%zu\n",sizeof(arr));  //prints memory allocated to array

    //no of elements in an array
    int a=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",a);
    return 0;
}
