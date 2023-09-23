/*(1_8) Write a program that reads a positive integer and 
checks if it is a perfect square.*/
#include<stdio.h>
void main (void)
{
    int num,i,flag=0;
    printf("please enter a number");
    scanf("%d",&num);
    if(num==1||num==0)
    {
        printf("The number is perfect square");
        flag=1;
    }
    else 
    {
        for(i=2;i<=num/2;i++)
        {
            if(num==i*i)
            {
                printf("The number is perfect square ");
                flag=1;
            }
        }
    }
    
    if(flag==0)
    {
        printf("the number is not a perfect square");
    }
    
    
}