#include<stdio.h>
/*(3_4) Write a C function that use the bubble sort algorithm to sort 
an integer array in ascending order (search for the bubble sorting 
algorithm).
*/
void func(int arrsz,int *arr)
{
    int i,j;
    int c=0,t;
    for(i=0;i<arrsz;i++)
    {
        for(j=i+1;j<arrsz;j++)
        {
            c++;
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
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