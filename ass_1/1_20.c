/*(1_20)  Write a program to display a full pyramid using stars
pattern.
            *
           ***
          *****
         *******
        *********
*/
#include<stdio.h>
void main (void)
{
    int i=0,j=1,t,c=5,n=4;
    while(c!=0)
    {
        for(i=0;i<=n;i++)
        {
            printf(" ");
        }
        n--;
        t=j;
        while(j!=0)
        {
            printf("*");
            j--;
        }
        j=t;
        j=j+2;
        printf("\n");
        c--;
    }
    
}