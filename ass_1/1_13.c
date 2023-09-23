/*(1_13) Write a program that reads a positive integer and 
checks if it is a prime.*/
#include<stdio.h>
/*to check if it works on all fisrt 200 numbers or not
int x ;
    // printf("please enter a number");
    // scanf("%d",&x);
    for(x=0;x<200;x++)
    {
        if(((x%2==1&&x!=1)||x==2)&&(x==3||x%3!=0)&&(x==5||x%5!=0)&&(x==7||x%7!=0))
        {
            printf("%d ",x);
        }
        else 
        {
            // printf("this number is not a prime number");
        }
    }*/
void main (void)
{
    int x ;
    printf("please enter a number");
    scanf("%d",&x);
    if(((x%2==1&&x!=1)||x==2)&&(x==3||x%3!=0)&&(x==5||x%5!=0)&&(x==7||x%7!=0))
    {
        printf("%d ",x);
    }
    else 
    {
        printf("this number is not a prime number");
    }
}
