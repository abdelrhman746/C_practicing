#include<stdio.h>
/*(2_13) In this challenge write a function to add two floating numbers. 
Determine the integer floor of the sum. The floor is the truncated float 
value, anything after the decimal point is dropped. For instance 
floor(1.1+3.05)=floor(4.15)=4
*/
int func(float a,float b)
{
   int c;
   c=a+b;
   return c;
}
void main (void)
{
    float x=5.35,y=3.15;
    int m;
    m=func(x,y); 
    printf("the sume of %.2f and %.2f is %d",x,y,m);
    
}