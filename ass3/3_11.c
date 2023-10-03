#include<stdio.h>
/*(3_11)  Write a function that prints the frequency of a certain 
character in a string.
*/
void func(int arrsz,int *arr,int key)
{
    int i,t=-1;
    for(i=0;i<arrsz;i++)
    {
        if(arr[i]==key)
        {
            t=i;
        }
    }  
    if(t!=-1)
    {
        printf("the frequency of character %c is %d\n",key,t);
    } 
    else
    {
        printf("character not found"); 
    }
    
}
void main (void)
{
    int arr1[10]={'A','B','c','D','E','V','G','H','I','j'};
    int n=10;
    int k='z';
    int i;
    func(n,arr1,k); 
    // for(i=0;i<n;i++)
    // {
    //     printf("%c ",arr1[i]);
    // }
   
}