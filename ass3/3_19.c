#include<stdio.h>
/*(3_19) ) Write a C function that compare between 2 arrays with the 
same length. It shall return 0 if the two arrays are identical and 1 
if not.
*/
int func(int arrsz1,int *array1,int *array2)
{
    int i,c=0,max=0;
    for(i=0;i<arrsz1;i++)
    {
        if(!(array1[i]==array2[i]))
        {
            c++;
        }
    }
    if(c==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void main (void)
{
    int arr1[10]={1,1,1,1,1,1,1,1,1,1};
    int arr2[10]={1,1,1,1,0,1,1,1,1,1};
    int n1=10;
    int t;
    t=func(n1,arr1,arr2); 
    if(t==0)
    {
        printf("the two arrays are identical");
    }
    else
    {
        printf("the two arrays are not identical");
    }
}