#include<stdio.h>
/*(4_10) Write a c function two SWAP two pointers.
Hint: use pointer to pointer as a function argument.
*/
void func(int **ptr1,int **ptr2)
{
    **ptr1=**ptr1^**ptr2;
    **ptr2=**ptr2^**ptr1;
    **ptr1=**ptr1^**ptr2;
}
void main (void)
{
   int num1=3;
   int num2=4;
   int *ptr1=&num1;
   int *ptr2=&num2;
   printf("before swap\n1st is :%d\n2nd is :%d\n",num1,num2);
   func(&ptr1,&ptr2);
   printf("after swap\n1st is :%d\n2nd is :%d",num1,num2);

}
