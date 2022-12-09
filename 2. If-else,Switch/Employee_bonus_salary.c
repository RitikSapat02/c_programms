#include<stdio.h>
int main()
{
    double salary,bonus=0,Total_salary=0;
    char gender;

    printf("Enter your gender (M,m,F,f): ");
    scanf("%c",&gender);
    printf("Enter salary:");
    scanf("%lf",&salary);

    if(gender=='M' || gender=='m'){
        bonus=bonus+0.05*salary;
    }
    else if(gender=='F' || gender=='f'){
        bonus=bonus+0.1*salary;
    }
    else{
        printf("Plz input valid gender");
    }

    if(salary<=10000){
        bonus=bonus+0.2*salary;
    }
    Total_salary=salary+bonus;
    printf("\n*************************\n");
    printf("Your salary: %lf\nBonus: %lf\nTotal_salary: %lf\n",salary,bonus,Total_salary);
    return 0;
}