/*(1_12) Write a program that reads a positive integer and 
computes the factorial.*/
#include<stdio.h>
void main (void)
{
    int num,i,fctrl=1;
    printf("enter a number ");
    scanf("%d",&num);
    for(i=num;i>0;i--)
    {
        fctrl=fctrl*i;
    }
    printf("%d",fctrl);
}
