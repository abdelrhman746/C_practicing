#include<stdio.h>
/*(4_2) C Program to find length of a given string using pointer.
*/
void main (void)
{

    char arr1[10]="Hello";
    int i=0;
    int *ptr=arr1;
    while(ptr[i]!='\0')
    {
        i++;
    }
    printf("the number  of the characters is %d",i+1);
}