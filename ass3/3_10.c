#include<stdio.h>
/*(3_10) Write a function which, given a string, converts all uppercase 
letters to lowercase, leaving the others unchanged.
*/
void func(int arrsz,int *arr)
{
    int i;
    for(i=0;i<arrsz;i++)
    {
        if(arr[i]>=65&&arr[i]<=90)
        {
            arr[i]=arr[i]+32;
        }
    }   
}
void main (void)
{
    int arr1[10]={'A','B','c','D','E','f','G','H','I','j'};
    int n=10;
    int i;
    func(n,arr1); 
    for(i=0;i<n;i++)
    {
        printf("%c ",arr1[i]);
    }
   
}