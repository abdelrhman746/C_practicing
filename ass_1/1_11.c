/*(1_11) Print sum of first 100 integers. (With data validation)*/
#include<stdio.h>
void main (void)
{
    int sum=0,i;
    for(i=0;i<=100;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);   
}