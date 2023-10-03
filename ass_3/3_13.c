#include<stdio.h>
/*(3_13)  Write a function to remove all characters in a string except 
alphabet.
*/
void func(int arrsz,int *arr)
{
    int i,c=0;
    for(i=0;i<arrsz;i++)
    {
        if(arr[i]=='\0')
        {
            break;
        }
        else if(!((arr[i]>=65&&arr[i]<=90)||(arr[i]>=97&&arr[i]<=122)))
        {
            arr[i]=' ';
        }
        
    }   
    printf("the lenght of the string is %d ",c);
}
void main (void)
{
    int arr1[10]={'G','o','!','d','L','0','c','k','\0'};
    int n=10;
    int i;
    func(n,arr1); 
    for(i=0;i<n;i++)
    {
        if(arr1[i]==' ')
        {
            continue;
        }
        else
        {
            printf("%c",arr1[i]);
        }
        
    }
   
}