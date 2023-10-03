#include<stdio.h>
/*(3_12)  Write a function to find the length of a string.
*/
void func(int arrsz,int *arr)
{
    int i,c=0;
    for(i=0;i<arrsz;i++)
    {
        if(arr[i]!='\0')
        {
            c++;
        }
    }   
    printf("the lenght of the string is %d ",c);
}
void main (void)
{
    int arr1[10]={'G','o','o','d','L','u','c','k','\0'};
    int n=10;
    int i;
    func(n,arr1); 
    // for(i=0;i<n;i++)
    // {
    //     printf("%c ",arr1[i]);
    // }
   
}