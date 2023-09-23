/*(1_15)  Write a program to calculate the power of a number.
The number and its power are input from user.*/
#include<stdio.h>
void main (void)
{
    int x,y,i,t=1;
    printf("please enter the number ");
    scanf("%d",&x);
    printf("please enter it's power");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
        t=t*x;
    }
    printf("%d",t);

}