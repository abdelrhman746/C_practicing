#include<stdio.h>
/*(4_11)  Write a c program that SWAP the value of the two 16-
bits of 32-bits integer number.
*/

void main (void)
{
   int num1=0xFFFFAAAA;
   int num2=0;
   short *ptr1=(short*)&num1;
   short *ptr2=(short*)&num2;
   printf("before swap :%d\n",num2);
   ptr2[1]=ptr1[0];
   ptr2[0]=ptr1[1];
   printf("after  swap :%x",num2);

}
