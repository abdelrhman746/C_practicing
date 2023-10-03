
#include<stdio.h>
/*(2_16)  Write a C function to count the number of 1’s in an unsigned 32-bit
integer.
*/
void func(unsigned int a)
{
    int i,c=0;
    for(i=0;i<32;i++)
    {
        if(a&(1<<i))
        {
            c++;
        }
        else 
        {
            //nothing
        }
    }
    printf("the number of 1s in this number is %d",c);
}
void main (void)
{
    unsigned int x=63;
    func(x);
}