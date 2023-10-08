#include<stdio.h>
/*(4_5) C function to copy all elements of an array into another 
array using pointers. The two arrays have the same length 
and types.
*/
void func(int*ptr1,int*ptr2)
{
    int temp,j;
    for(j=0;j<10;j++)
    {
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
        ptr1++;
        ptr2++;
    }
}
void main (void)
{
        int i;
    int arr1[10]={1,1,1,1,1,1,1,1,1,1};
    int arr2[10]={2,2,2,2,2,2,2,2,2,2};
    int *ptr_1=arr1;
    int *ptr_2=arr2;
    printf("before\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%d\n",arr1[i],arr2[i]);
    }
    func(ptr_1,ptr_2);
    printf("after\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t%d\n",arr1[i],arr2[i]);
    }
    
}