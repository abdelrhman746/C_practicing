/*(1_17) Write a program to count number of digits in a 
decimal number.*/
#include<stdio.h>
void main (void)
{
    long long x=1332122333332;
    int c=0;
    while(x!=0)
    {
        x/=10;
        c++;
    }
    printf("%d",c);
}
