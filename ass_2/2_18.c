
#include<stdio.h>
/*(2_18)  Given two integers: L and R, Find the maximal value of A xor B where 
A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 
1000
Input format: the input contains two lines first line contains L and next 
line contains R.
Output format: The maximum value of A xor B
*/
void func(int a,int b)
{
    int i,j,max=0,t;
    for(i=a;i<b;i++)
    {
        for(j=i;j<b;j++)
        {
            t=i^j;
            if(t>max)
            {
                max=t;
            }
        }
    }
    printf("the max. value is %d",max);
}   
void main (void)
{
    int x=10,y=15;
    func(x,y);
}