#include<stdio.h>
/*(3_6) Write a C function to return the index of LAST occurrence of a 
number in a given array. Array index start from 0. If the item is not 
in the list return -1. (Linear Search Algorithm)
Example: Array = {1,2,3,4,4,4} 
The required number is 4 it should return 5
*/
int func(int arrsz,int *arr,int key)
{
    int i,c=0,t;
    for(i=0;i<arrsz;i++)
    {
        if(key==arr[i])
        {
            c++;
            t=i;   
        }
    }
    if(c==0)
    {
        return -1;
    }
    else if(c>0)
    {
        return  t;
    }

}
void main (void)
{
    int arr1[6]={1,2,3,4,4,4};
    int n=6;
    int k=4;
    int m;
    m=func(n,arr1,k); 
    if(m==-1)
    {
        printf("not found");
    }
    else 
    {
        printf("the last occurance of %d is at index %d",k,m);
    }
}