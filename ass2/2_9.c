#include<stdio.h>
/*(2_9) Write a C Function that swaps the value of two integer numbers.
*/
void func(int a,int b)
{
    printf("before swap the 1st number is %d the 2nd is %d\n",a,b);
    int t;
    t=a;
    a=b;
    b=t;
    printf("after swap the 1st number is %d the 2nd is %d",a,b);
}
void main (void)
{
    int x=1,y=100;
    func(x,y);
     
}