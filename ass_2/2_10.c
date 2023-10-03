#include<stdio.h>
/*(2_10) You are designing a poster which prints out numbers with a unique 
style applied to each of them. The styling is based on the number of 
closed paths or holes present in a giver number. The number of holes 
that each of the digits from 0 to 9 have are equal to the number of closed 
paths in the digit. Their values are:
 1, 2, 3, 5 and 7 = 0 holes.
 0, 4, 6, and 9 = 1 hole.
 8 = 2 holes.
Given a number, you must determine the sum of the number of holes for 
all of its digits. For example, the number 819 has 3 holes.
Function Description
Complete the function countHoles. The function must return an integer 
denoting the total number of holes in num
*/
void func(int a)
{
    int m,c=0,t=a;
    while(a!=0)
    {
        m=a%10;
        if(m==0||m==4||m==6||m==9)
        {
            c++;
        }
        else if(m==8)
        {
            c=c+2;
        }
        a=a/10;
    }
    printf("the number %d has %d holes",t,c);
}
void main (void)
{
    int x=8888;
    func(x);
     
}