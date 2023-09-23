/*(1_6) Write a program that print the relation between two 
integer number if those numbers are equal, not equal and 
which one contain the higher value.*/
#include<stdio.h>
void main (void)
{
    int num1 , num2;
    printf("please enter the 1st number");
    scanf("%d",&num1);
    printf("please enter the 2nd number");
    scanf("%d",&num2);
    if(num1==num2)
    {
        printf("The two numbers are equal");
    }
    else 
    {
        if(num1>num2)
        {
            printf("The 1st number is greater than the 2nd number");
        }
        else 
        {
            printf("The 1st number is smaller than the 2nd number");
        }
    }
}