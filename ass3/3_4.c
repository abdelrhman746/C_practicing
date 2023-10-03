#include<stdio.h>
/*(3_4) Write a C function that use the selection sort algorithm to sort 
an integer array in ascending order (search for the selection 
sorting algorithm).
*/
void func(int arrsz,int *arr)
{
    int i,j;
    int min,t=0,l=0;
    for(i=0;i<arrsz;i++)
    {
        min=i;
        for(j=i+1;j<arrsz;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(arr[min]<arr[i])
        {
            t=arr[i];
            arr[i]=arr[min];
            arr[min]=t;
        }
    }
    for(i=0;i<arrsz;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main (void)
{
    int arr1[10]={200,30,532,2,12,12,4,0,1,45};
    int n=10;
    func(n,arr1); 
}