#include<stdio.h>
/*(3_16) Write a C function that takes an array as input and reverse it. 
Example:
Input : 1,2,3,4,5
Output: 5,4,3,2,1
*/
void func(int arrsz,int *arr)
{
    int i,c=9;
    int ar[10];
    for(i=0;i<arrsz;i++)
    {
        ar[c]=arr[i];
        c--;
    }   
    for(i=0;i<arrsz;i++)
    {
        arr[i]=ar[i];
        
    }   
}
void main (void)
{
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int i;
    printf("the array before :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);       
    }
    func(n,arr1); 
    printf("\nthe array after  :");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);       
    }
}