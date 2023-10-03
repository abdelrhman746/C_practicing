#include<stdio.h>
/*(3_8)  Write a program that computes the nth term of the geometric 
series:
1, 3, 9, 27, …
Run the program to compute the 10th term of the given series.
*/
void func(int arrsz,int *arr)
{
    int i,c=1,t;
    for(i=0;i<arrsz;i++)
    {
        arr[i]=c;
        c=c*3;
    }
    for(i=0;i<arrsz;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main (void)
{
    int arr1[10];
    int n=10;
    int m;
    func(n,arr1); 
   
}