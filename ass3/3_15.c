#include<stdio.h>
/*(3_15) Write a function to concatenate two strings without using 
strcat function.
*/
void func(int arrsz,int *arr,int *ar)
{
    int i,c=0;
    for(i=8;i<arrsz;i++)
    {
        arr[i]=ar[c];
        c++;
    }   
    
}
void main (void)
{
    int arr1[20]={'G','o','o','d','L','u','c','k','\0'};
    int arr2[20]={'G','o','l','d','L','o','c','k','\0'};
    int n=20;
    int i;
    func(n,arr1,arr2); 
    for(i=0;i<n;i++)
    {
        printf("%c",arr1[i]);       
    }
}