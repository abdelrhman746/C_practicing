#include<stdio.h>
/*(1) Write a program that take two integers from the user 
and print the results of this equation:
Result = ((num1 + num2) * 3) – 10*/
void main (void)
{
    int x,y,z;
    printf("please enter the 1st number");
    scanf("%d",&x);
    printf("please enter the 2nd number");
    scanf("%d",&y);
    z=((x+y)*3)-10;
    printf("%d",z);
}