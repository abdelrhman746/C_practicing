#include<stdio.h>
/*(2_7) Write a C Function that reads two integers and checks if the first is 
multiple of the second.
*/
void func(int a,int b)
{
    int m,n;
    m=a/b;
    n=b*m;
    if(n==a)
    {
        printf("the 1st number is multiple of the 2nd");
    }
    else
    {
        printf("the 1st is not multiple of the 2nd");
    }
}
void main (void)
{
    char x=31,y=2;
    func(x,y);   
}