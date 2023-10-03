#include<stdio.h>
/*(2_1) Write a C Function that takes one character and checks if it alphabet 
or not.*/
void func(char b)
{
    if(b>=65&&b<=90)
    {
        printf("it is a capital alphabet");
    }
    else if(b>=97&&b<=122)
    {
        printf("it is a small alphabet");
    }
    else 
    {
        printf("it is not an alphabet");
    }
    
}
void main (void)
{
    char x='a';
    func(x);
}