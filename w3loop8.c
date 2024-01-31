/*9. Write a program in C to display a pattern like a right
 angle triangle using an asterisk.

The pattern like :

*
**
***
****
*/
#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter n:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}