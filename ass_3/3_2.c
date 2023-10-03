#include<stdio.h>
/*(3_2) Write a function which, given a string, return TRUE if all 
characters are distinct and FALSE if any character is repeated.
*/
int func(int arrsz,int *arr)
{
    int i,j;
    int c=0;
    for(i=0;i<arrsz;i++)
    {
    
        if(arr[i]==arr[i+1])
        {
            c++;
        }
    
    }
    return c;
}
void main (void)
{
    int arr1[5]={'H','e','l','l','o'};
    int n=5;
    int m=0;
    printf("%d\n",m);
    if(m==0)
    {
        printf("all characters are distinict");
    }
    else
    {
        printf("all characters are not distinict");
    }
    
}