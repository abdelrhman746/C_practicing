#include<stdio.h>
/*(2_3)Write a C Function that check if the number if positive or negative.
*/
void func(int b)
{
    if(b>0)
    {
        printf("the number is positive");
    }  
    else if(b==0)
    {
        printf("the number is zero");
    }  
    else if(b<0)
    {
        printf("the number is negative");
    }
    else
    {
        printf("Invalid input");
    }
}
void main (void)
{
    int x=21;
    func(x);
}