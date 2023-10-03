#include<stdio.h>
/*(3_9)The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called 
Fibonacci numbers; each is the sum of the preceding 2. Write a 
program which given n, returns the nth Fibonacci number.
- with for/while
- with recursion
*/
int x=1;// 1: for the loop 0:for the recursion
int l=0,m=1,z=2;
void func(int arrsz,int *arr)
{
    #if (x>0) 
    {
        int i,c=1,t;
        for(i=2;i<arrsz;i++)
        {
            arr[i]=l+m;
            l=m;
            m=arr[i];
        }
    }
    #elif (x==0)
    {
        if(z<10)
        {
            arr[z]=l+m;
            l=m;
            m=arr[z];
            z++;
            func(arrsz,arr);
        }
        else 
        {
            return ;
        }
    }
    #endif
    

    
}
void main (void)
{
    int arr1[10]={0,1,0,0,0,0,0,0,0,0};
    int n=10;
    int i;
    func(n,arr1); 
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
   
}