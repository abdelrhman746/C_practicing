#include<stdio.h>
/*(2_5)Write a C function to check if the input is an even number or an odd
number, if even number return 0 if odd number return 1.
Example: 
Input 7, Output = 1 (Odd)
Input 6, Output = 0 (Even)*/
int func(int a)
{
    int f=-1;
    if(a%2==1)
    {
        f=1;
    }
    else
    {
        f=0;
    }
    return f;
}
void main (void)
{
    int x=21,m;
    m=func(x);
   if(m==0)
   {
        printf("the number %d is even",x);
   }
   else if(m==1)
   {
        printf("the number %d is odd",x);
   }
}