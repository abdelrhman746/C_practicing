/*(1_16)  Write a program to reverse a number.*/
#include<stdio.h>
void main (void)
{
    int x=842834298;
    int t=0,rvrs;
    while(x!=1)
    {
        t=x%10;
        rvrs=(rvrs+t)*10;
        x=x/10;
        if(x<10)
        {
            rvrs=rvrs+x;
            break;
        }
    }
    printf("%d",rvrs);
}
