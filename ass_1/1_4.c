/*(1_4) Write a program that reads the radius of a circle and 
calculates the area and circumference then prints the 
results.*/
#include<stdio.h>
void main (void)
{
    int radius,circum,area;
    printf("please enter the radius of the circle ");
    scanf("%d",&radius);
    circum=(2*3.14*radius);
    area=(3.14*radius*radius);
    printf("The circumference is %d\n",circum);
    printf("The area is %d",area);

}