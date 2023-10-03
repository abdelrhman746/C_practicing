
#include<stdio.h>
/*(2_15) Write a C function to reverse the binary of an 8-bits number. For 
example if the input number is 10001101 the output number should be 
10110001.
*/
void func(char a)
{
   char i;
   for(i=0;i<8;i++)
   {
        if(a&(1<<i))
        {
            printf("1");
        }
        else 
        {
            printf("0");
        }
   }
}
void main (void)
{
    char x=0b10001101;
    func(x);     
}