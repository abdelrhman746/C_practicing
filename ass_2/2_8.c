#include<stdio.h>
/*(2_8) Write a C Function that display Prime Numbers between Intervals (two 
numbers) by Making Function.
*/
void func(int a,int b)
{
    int i,c=0;
    for(i=a;i<=b;i++)
    {
        if(((i%2==1&&(i!=1))|(i==2))&&((i==3)||(i%3!=0))&&((i==5)||(i%5!=0))&&((i==7)||(i%7!=0)))
        {
            printf("%d ",i);
        }
    }
    
}
void main (void)
{
    int x=1,y=100;
    func(x,y);
     
}