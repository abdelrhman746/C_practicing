/*(1_7) Write a program that takes three integers, and prints 
out the smallest number.*/
#include<stdio.h>
void main (void)
{
    int num1 , num2 ,num3;
    printf("please enter the 1st number");
    scanf("%d",&num1);
    printf("please enter the 2nd number");
    scanf("%d",&num2);
    printf("please enter the 3rd number");
    scanf("%d",&num3);
    if((num1<num2)&&(num1<num3))
    {
        printf("The 1st number is the smallest number");
    }
    else if((num2<num1)&&(num2<num3))
    {
        printf("The 2nd number is the smallest number");
    }
    else if ((num3<num1)&&(num3<num2))
    {
        printf("the 3rd number is the smallest number");
    }
}