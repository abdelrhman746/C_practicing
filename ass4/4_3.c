#include<stdio.h>
/*(4_3)C Program to read 10 integers into an array from user 
and print them in reversing order using pointers.
*/
void main (void)
{
    int arr[10];
    int *ptr=arr;
    int i;
    for(i=0;i<10;i++)
    {
        printf("please element No.%d :",i+1);
        scanf("%d",ptr);
        ptr++;
    } 
    for(i=9;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }

}