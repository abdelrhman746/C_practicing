
#include<stdio.h>
/*(2_17)  Write a C function to count the number of 1’s in an unsigned 32-bit
integer.
*/
void func(unsigned char a)
{
    int i,c=0;
    for(i=0;i<8;i++)
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
    unsigned char x=255;
    func(x);
}