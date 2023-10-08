#include<stdio.h>
/*(4_8) C function to swap two numbers using bitwise 
operation and call it using pointer to function.
*/
void func(int*ptr1,int*ptr2)
{
    *ptr1=*ptr1^*ptr2;
    *ptr2=*ptr2^*ptr1;
    *ptr1=*ptr1^*ptr2;
}
void main (void)
{
   int x=3;
   int y=4;
   int *ptrx=&x;
   int *ptry=&y;
   printf("after swap\nthe 1st No.is: %d\nthe 2nd No. is %d\n",x,y);
   func(ptrx,ptry);
   printf("before swap\nthe 1st No.is: %d\nthe 2nd No. is %d\n",x,y);
}