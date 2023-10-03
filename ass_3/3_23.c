#include<stdio.h>
/*(3_22) Write a c function that removes the repeated number of an 
input sorted array and return a new array without the repeated 
numbers. The function shall return error if the size of the input 
array is ZERO. The function takes four inputs:
a. Old array.
b. Old array size.
c. New array (empty array).
d. The size of the new array after fill it in the function.
int removeDuplicates(int arr_old[], int n_old, int arr_new[], int 
*n_new)
Example:
arr1 = {1,2,3,3,3,4,4,5,5,5}  arr2 = {1,2,3,4,5}
*/
int func(int arrsz1 ,int *array1,int arrsz2,int *array2)
{
    if(arrsz2==0)
    {
        return -1;
    }
    else
    {
        int i,c=0;
        for(i=0;i<arrsz1;i++)
        {
            if(!(array1[i]==array1[i+1]))
            {
                array2[c]=array1[i];
                c++;
            }
        }
        return c;
    }
    
}
void main (void)
{
    int arr1[10]={1,2,3,3,3,4,4,5,5,5};
    int arr2[10];
    int n1=10;
    int n2=10;
    int i,m;
    m=func(n1,arr1,n2,arr2); 
    if(m==-1)
    {
        printf("error!");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",arr2[i]);
        }
    }
    
}