/*(1_19) Write a program to count number of digits in a 
decimal number.*/
#include<stdio.h>
void main (void)
{
    int i,j;
    for(i=5;i>=0;i--)
    {
        for(j=i;j>=0;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}