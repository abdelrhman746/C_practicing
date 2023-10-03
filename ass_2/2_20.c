
#include<stdio.h>
#include<math.h>
/*(2_20) Write a C function that return 0 if a given number is a power of 3, 
otherwise return 1.
*/
void func(int a)
{
    int m;
    m=cbrt(a);
    if(a==(m*m*m))
    {
        printf("the number is  power of 3");
    }
    else
    {
        printf("the number is not power of 3");
    }
    
    
}   
void main (void)
{
    int x=26;
    func(x);
}