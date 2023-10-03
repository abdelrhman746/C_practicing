
#include<stdio.h>
#include<math.h>
/*(2_19) Given a positive integer z, check if z can be written as 𝑝^𝑞
, where p and q are positive integers than 1, if z can be written as 𝑝𝑞
return 1 else return 0.
Description:
A positive integer that needs to be determined if it can be expressed as a 
power of square number.
*/
void func(int a)
{
    int m;
    m=sqrt(a);
    if(a==(m*m))
    {
        printf("the number is  super square");
    }
    else
    {
        printf("the number is not super square");
    }
    
    
}   
void main (void)
{
    int x=27;
    func(x);
}