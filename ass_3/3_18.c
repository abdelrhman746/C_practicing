#include<stdio.h>
/*(3_18) )  Write a C function that return the count of the longest 
consecutive occurrence of a given number in an array.
Example:
Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3  result = 4
*/
void func(int arrsz1,int *array1)
{
    int i,c=0,max=0;
    for(i=0;i<arrsz1;i++)
    {
        if(array1[i]==3)
        {
            c++;
        }
        else
        {   
            c=0;
        }
        if(max<c)
        {
            max=c;
        }
    }
    printf("the longest consecutive occurrence of 3 is %d",max);
}
void main (void)
{
    int arr1[14]={1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    int n1=14;
    int i;
    func(n1,arr1); 
}