#include<stdio.h>
/*(2_12)  Write a C function that calculates the required heater activation time 
according to the input temperature of water.
- if input temperature is from 0 to 30, then required heating time = 7 
mins.
- if input temperature is from 30 to 60, then required heating time = 5 
mins.
- if input temperature is from 60 to 90, then required heating time = 3 
mins.
- if input temperature is more than 90, then required heating time = 1 
mins.
- if temperature is invalid (more than 100), return 0
Example:
Input = 10  output = 7
Input = 35  output = 5

*/
int func(int a)
{
    int s;
    if(a>=0&&a<30)
    {
        s=7;
    }
    else if(a>=30&&a<60)
    {
        s=5;
    }
    else if(a>=60&&a<90)
    {
        s=3;
    }
    else if(a>=90&&a<100)
    {
        s=1;
    }
    else if(a>100)
    {
        s=0;
    }

    return s;
}
void main (void)
{
    int x=35,m;
    m=func(x); 
    if(m==0)
    {
        printf("invalid input");
    }
    else 
    {
        printf("the time needed by the heater is %d",m);
    }
}