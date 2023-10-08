#include<stdio.h>
/*(4_9) Given a string, create a new string made up of its last 
two letters, reversed and separated by a space, the word 
is “bat”. Return string contains ”t a”
*/
void func(char arrsz,char*ptr1,char*ptr2)
{
    char i,c=2;
    ptr2[3]='\0';
    for(i=0;i<arrsz;i++)
    {
        if(ptr1[i]!='\0')
        {
            ptr2[c]=ptr1[i];
            c--;
        }
    }   
    ptr2[2]=ptr2[1];
    ptr2[1]=' ';
}
void main (void)
{
   char arr1[4]={"bat\0"};
   char arr2[4];
   char n=4,i;
   char*ptr1=arr1;
   char*ptr2=arr2;
   func(n,ptr1,ptr2);
   for(i=0;i<n;i++)
   {
        printf("%c",arr2[i]);    
   }
}