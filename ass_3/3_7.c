#include<stdio.h>
/*(3_7)  Write a program that computes the nth term of the arithmetic 
series: 1, 3, 5, 7, 9, …
Run the program to compute the 100th term of the given series.
*/
void func(int arrsz,int *arr)
{
    int i,c=1,t;
    for(i=0;i<arrsz;i++)
    {
        arr[i]=c;
        c=c+2;
    }
    for(i=0;i<arrsz;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main (void)
{
    int arr1[100];
    int n=100;
    int m;
    func(n,arr1); 
   
}