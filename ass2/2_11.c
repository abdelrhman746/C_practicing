#include<stdio.h>
/*(2_11) Write a C function that returns 1 if the input number is a power of 2 
and return 0 if the input number is power of 2.
For example: 0, 2 and 16 are power of 2.
 1, 10 and 30 are not power of 2.
*/
void func(int a)
{
    int i,c=0;
    for(i=0;i<32;i++)
    {
        if(a&(1<<i))
        {
            c++;
        }
    }
    if((c==1&&a!=1)||a==0)
    {
        printf("the number is power of 2");
    }
    else 
    {
        printf("the number is not a power of 2");
    }
}
void main (void)
{
    int x=20;
    func(x); 
}