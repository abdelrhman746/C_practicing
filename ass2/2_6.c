#include<stdio.h>
/*(2_6) Write C Function that converts the any letter from lowercase to 
uppercase.*/
void func(char a)
{
    char m;
    printf("the character in lower case is %c \n",a); 
    if(a>=97&&a<=122)
    {
        m=a-32;
        printf("the character in uppercase is  %c ",m); 
    }
    else 
    {
        printf("invalid input");
    }
  
}
void main (void)
{
    char x='g';
    func(x);   
}