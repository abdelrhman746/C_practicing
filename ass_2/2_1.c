#include<stdio.h>
/*(2_1) Write a C Function that prints the cube of any number.*/
void func(int n)
{
    int z;
    z=n*n*n;
    printf("the cube of %d is %d",n,z);
}
void main (void)
{
    int x=3;
    func(x);

}