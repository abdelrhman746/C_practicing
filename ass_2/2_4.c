#include<stdio.h>
/*(2_4) Write a C Function that return the addition or subtraction or 
multiplication or division for two numbers. The function should take the 
required operation and two numbers as arguments. It also should check 
that the input operation is one of those operation that mentioned before 
and if not it should return error. The function should be implemented 
using switch case.*/
int func(int a,int b,char c)
{
    int res;
    switch(c)
    {
        case '+':res=a+b;break;
        case '-':res=a-b;break;
        case '*':res=a*b;break;
        case '/':res=a/b;break;
    }
    return res;
}
void main (void)
{
    int x=22,y=2,m;
    char z='/';
    m=func(x,y,z);
    printf("the result is %d",m);
}