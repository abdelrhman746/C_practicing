#include<stdio.h>
/*(3_1)The sum of an array is the sum of its individual elements. For 
example, if an array is numbers = {1, 2, 3, 4}, the sum of the array 
is 1+2+3+4 = 10.
Function Description: Complete the function summation. The 
function must return the integer sum of the numbers array.
 int summation(int numbers_size, int* numbers)
*/
int func(int arrsz,int *arr)
{
    int i;
    int sum=0;
    for(i=0;i<arrsz;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
void main (void)
{
    int arr1[5]={1,2,3,4,5};
    int n=5;
    int m=0;
    m=func(n,arr1);
    printf("the sum of the array is %d",m);
    
}