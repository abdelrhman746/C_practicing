#include<stdio.h>
/*(3_14)  Write a function to reverse a string by passing it to a function.
*/
void func(int arrsz,int *arr)
{
    int i,c=9;
    int arr2[10];
    for(i=0;i<arrsz;i++)
    {
        arr2[c]=arr[i];
        c--;
    }   
    for(i=0;i<arrsz;i++)
    {
        arr[i]=arr2[i];
        
    }   
}
void main (void)
{
    int arr1[10]={'G','o','l','d','L','o','c','k','\0'};
    int n=10;
    int i;
    func(n,arr1); 
    for(i=0;i<n;i++)
    {
        printf("%c",arr1[i]);       
    }
}