#include<stdio.h>
/*(4_4) C function to get the value of the smallest element in 
array using pointers.
*/
void main (void)
{
    int arr[10]={21,3,4,35,3,6523,2,32,42,5};
    int *ptr=arr;
    int i,temp=0xffffff;
    for(i=0;i<10;i++)
    {
        if(*ptr<temp)
        {
            temp=*ptr;
        }
        ptr++;
    } 
    printf("%d",temp);
}