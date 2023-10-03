#include<stdio.h>
/*(3_21) Write a C function to return an array containing the values 
between two 8-bits unsigned integers IN DESCENDING ORDER 
EXCLUSIVE. The function takes 2 values (LowerValue and 
UpperValue), it shall determine the values in between, and then 
arrange the sequence in descending order excluding the upper 
and lower values.
If the LowerValue is greater than or equal the UpperValue, return 
an array of 2 elements, both containing value = 0xFF
Example:
Input: LowerValue=2 and UpperValue=5
Output:
Output Array=4,3
Output Array Size=2
*/
int func(int *array1,int n1,int n2)
{
    int i,c=0,max=0;
    if(n1>n2)
    {
        array1[0]=0xff;
        array1[1]=0xff;
        return  -1;
    }
    else
    {
        int range=n2-n1;
        range-=1;
        for(i=0;i<range;i++)
        {
            n1++;
            if(n1!=n2)
            {
                array1[i]=n1;
            }    
        }
        return range;
    }
    
}
void main (void)
{
    int arr1[1000];
    int lower=2,higher=5;
    int c=0,i;
    c=func(arr1,lower,higher); 
    if(c==-1)
    {
        printf("%d  %d",arr1[0],arr1[1]);
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%d ",arr1[i]);
    }
}