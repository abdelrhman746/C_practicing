/*(1_21) Write a program to display cross or X-shape using stars 
pattern.
*         *
 *       * 
  *     * 
   *   * 
    * * 
    * * 
   *   * 
  *     * 
 *       * 
*         * 
*/

#include<stdio.h>
void main (void)
{
    int c=0,i=0,j=0,m=0,n=9;
    while(c<5)
    {
        while(i<=m)
        {
            printf(" ");
            i++;
        }
        i=0;
        m++;
        printf("*");
        while(j<n)
        {
            printf(" ");
            j++;
        }
        j=0;
        n=n-2;
        printf("*");
        c++;
        printf("\n");
    }
     c=0,i=0,j=0,m=5,n=0;
    while(c<5)
    {
        while(i<m)
        {
            printf(" ");
            i++;
        }
        i=0;
        m--;
        printf("*");
        while(j<=n)
        {
            printf(" ");
            j++;
        }
        j=0;
        n=n+2;
        printf("*");
        c++;
        printf("\n");
    }
}
