#include<stdio.h>
/*(3_17) ) Write a C Program for swapping two arrays “A & B” with 
different lengths. B will be always the smallest array.
int * Swap (int a_size,int *a,int b_size,int *b)
*/
void func(int arrsz1,int *array1,int arrsz2,int*array2)
{
    int i,temp;
    int ar[10];
    for(i=0;i<arrsz1;i++)
    {
        array1[i]=array1[i]^array2[i];
        array2[i]=array1[i]^array2[i];
        array1[i]=array1[i]^array2[i];
    }   
}
void main (void)
{
    int arr1[10]={1,1,1,1,1,1,1,1,1,1};
    int arr2[10]={9,9,9,9,9,9,9,9,9,9};
    int n1=10;
    int n2=10;
    int i;
    printf("the array1 before :");
    for(i=0;i<n2;i++)
    {
        printf("%d ",arr1[i]);       
    }
    printf("\n");
    printf("the array2 before :");
    for(i=0;i<n2;i++)
    {
        printf("%d ",arr2[i]);       
    }
    func(n1,arr1,n2,arr2); 
    printf("\n");
    printf("the array1 after  :");
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr1[i]);       
    }
    printf("\n");
    printf("the array2 after  :");
    for(i=0;i<n1;i++)
    {
        printf("%d ",arr2[i]);       
    }
}