
#include<stdio.h>
/*(2_14) Write a C Function that calculate the Fibonacci series using recursive 
method.
The Fibonacci Series : 0,1,1,2,3,5,8,13,21,…
*/
int l=0,m=1;
void func(int a)
{
    int t,c=0;
    t=l+m;
    l=m;
    m=t;
    printf("%d ",m);
    
    if(a!=0)
    {
        a--;
        func(a);       
    }
    else 
    {
        return ;
    }
    
    
}
void main (void)
{
    int x=10;
    printf("%d %d ",l,m);
    func(x); 
    
    
}