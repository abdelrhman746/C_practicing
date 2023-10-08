#include<stdio.h>
/*(4_1) C Program to compute sum of the array elements using 
pointers.
*/
void main (void)
{
    int arr1[5]={1,2,3,4,5};
    int i,sum=0,n=5;
    int *ptr=arr1;
    for(i=0;i<5;i++)
    {
        sum=sum+ptr[i];
    }
    printf("the sum of the array is %d",sum);
    
}