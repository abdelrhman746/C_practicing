/*(1_10) Write a program to make a simple calculator using 
switch-case. The calculator takes the operation 
(+ or – or * or /) and takes the two input arguments and 
print the results.*/
#include<stdio.h>
void main (void)
{
    int x,y,a;
    char z;
    printf("please enter the 1st number");
    scanf("%d",&x);
    printf("please enter operator ");
    scanf(" %c",&z);
    printf("please enter the 2nd number");
    scanf("%d",&y);
    switch (z)
    {
    case '*' : printf("the result is: %d",x*y); //42 * ascii
        break;
    case '+' : printf("the result is: %d",x+y); //43 + ascii
        break;
    case '/' : printf("the result is: %d",x/y); //47 / ascii
        break;  
    case '-' : printf("the result is: %d",x-y); //45 - ascii
        break;       
    default: printf("wrong operator");
        break;
    }

}
